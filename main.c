#include <stdio.h>

extern void my_printf();

int main() {
    printf("\n>>> main(): start\n\n");

    char string[] = "[test %s]";

    my_printf("hello world: \n\tpercent: %%\n\tbinary: %b\n\tdecimal: %d\n\toctal: %o\n\thexidecimal: %x\n\tstring: %s\n\tcharacter: %c\n",
                            12, -23, -10, 56, string, 'c');

    printf("\n<<< main(): end\n\n");
    return 0;
}