#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void)
{
   // make the process run on CPUs 0 and 2 only
   set_affinity_mask(5);
   printf("start of test");
   for (;;)
   {
      printf("%d", getpid());
   }
   return 0;
}