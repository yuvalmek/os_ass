#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void)
{
   int x = 0;
   // make the process run on CPUs 0 and 2 only
   set_affinity_mask(0b000000101);
   printf("start of test \n");
   for (;;)
   {
      x++;
      sleep(5000);
   }
   return 0;
}