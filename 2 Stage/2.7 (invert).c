#include <stdio.h>

int rightrot(int x, int p, int n) {
    int b = ((1 << (p + n)) - 1) & (~0 << p);
//    printf("%b\n", b);
//    printf("%b\n", ~(x & (~(~0 << n) << p)) & b);
//    printf("%b\n", (x & (~0 << (p + n))) | ~(x & (~(~0 << n) << p)) & b | (x & ~(~0 << p)));
    return (x & (~0 << (p + n))) | ~(x & (~(~0 << n) << p)) & b | (x & ~(~0 << p));
}

int main() {
    printf("%b\n", rightrot(0b1111001010001111, 6, 4));
    return 0;
}