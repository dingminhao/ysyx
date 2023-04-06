#include "./include/devicebase.h"

bool atRange(paddr_t s, paddr_t e, paddr_t val) {
    if(s <= val && val <= e) {
        return true;
    }
    return false;
}