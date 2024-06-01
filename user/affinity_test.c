#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void) {
   set_affinity_mask(0b000111110);
   for(;;) {
    printf("%d",getpid());
   }
}