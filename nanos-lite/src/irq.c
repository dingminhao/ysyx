#include <common.h>
//#define Etrace

static Context* do_event(Event e, Context* c) {

  
  switch (e.event) {
    case EVENT_SYSCALL : 
    do_syscall(c); 
    #ifdef Etrace
      printf("EVENT_SYSCALL happen.\n");
    #endif
    break;

    case EVENT_YIELD : 
    #ifdef Etrace
      printf("EVENT_YIELD happen.\n");
    #endif 

    
    break;


    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
