#include <stdio.h>

int rightrot(int x, int n) {
    int b;
    int counter = 0;
    for (b = 1; b * 2 - 1 < x; b = b << 1, counter++);
//    printf("%b %d\n", (b << 1) - 1, counter + 1);
//    printf("%b\n", (x & ~(~0 << n)) << (counter + 1 - n));
//    printf("%b\n", (x & ~(~0 << n)) << (counter + 1 - n) | (x & (~(~0 << (counter + 1 - n)) << n)) >> n);
    return (x & ~(~0 << n)) << (counter + 1 - n) | (x & (~(~0 << (counter + 1 - n)) << n)) >> n;
}

int main() {
    printf("%b\n", rightrot(0b10000111100001011, 4));
    return 0;
}