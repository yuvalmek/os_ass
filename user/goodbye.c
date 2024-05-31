//Write a user space program called goodbye.c that immediately calls exit() with the message ”Goodbye World xv6”.
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void)
{
  fprintf(1, "Goodbye World xv6\n");
  exit(0,0);
}
