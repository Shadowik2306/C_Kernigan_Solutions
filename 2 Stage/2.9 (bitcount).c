#include <stdio.h>

int bitcount(unsigned x) {
    int b = 0;
    for (; x != 0; x &= (x - 1)) b++;
    return b;
}

int main() {
    printf("%d\n", bitcount(0b1001010));
    return 0;
}
