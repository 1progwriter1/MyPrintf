#include <stdio.h>

extern "C" void hello();

int main() {

    printf("ok");
    hello();

    return 0;
}