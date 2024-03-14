#include <stdio.h>

extern void my_printf(const char *fmt_string, ...);

int main() {

    printf("std printf\n\n");

    my_printf("Hello world!", 10, 20, 30, 50, 50, 34, 39);

    return 0;
}