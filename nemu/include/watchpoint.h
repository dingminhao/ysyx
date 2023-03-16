#ifndef __WATCHPOINT__
#define __WATCHPOINT__
#define NR_WP 32
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  uint64_t value;
  char EXPR[1000];
} WP;

void init_wp_pool();
WP* new_wp();
void free_up(WP *wp);
void watch_points();
bool update_wp();
void delete_wp(int number); 
#endif
