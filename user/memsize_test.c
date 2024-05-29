#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    printf("Memory size: %d\n", memsize()); 
    char *p = malloc(20000);
    printf("Memory size after allocating 20k more bytes: %d\n", memsize());
    free(p);
    printf("Memory size after freeing the allocated array: %d\n", memsize());

    exit(0);
}