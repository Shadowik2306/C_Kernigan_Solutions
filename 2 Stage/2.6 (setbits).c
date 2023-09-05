#include <stdio.h>

// Reference from https://www.cyberforum.ru/c-beginners/thread1348591.html. THX
unsigned int setbits_custom(unsigned int x,unsigned int p,unsigned int n,unsigned int y)
{
    unsigned int b1 = 1;
    unsigned int b2 = 0;

    for (n; n > 0; --n)
    {   b2 = b2 | b1;
        b1 = b1 << 1;   } /* ставим n битов справа в q */
    b1 = b2;        /* копию в b1 */
    b1 = b1 << p;       /* сдвигаем установленные биты на p -ю позицию */
    b1 = ~b1;       /* инвертируем */
    x = x & b1;     /* вырезаем "дырку" в x в месте куда надо вставить из y */
    b2 = b2 & y;        /* берём n битов из правой части y */
    b2 = b2 << p;       /* сдвигаем их на p позицию */
    x = x | b2;     /* устанавливаем их в x */

    return x;
}


int setbits(int x, int p, int n, int y) {
//    printf("%b\n", x &(~0 << (p + n)));
//    printf("%b\n", y & ~(~0 << n));
//    printf("%b\n", x & ~(~0 << p));
//    printf("%b\n", (x & (~0 << (p + n))) | (y & ~(~0 << n)) << p | (x & ~(~0 << p)));
    return (x & (~0 << (p + n))) | (y & ~(~0 << n)) << p | (x & ~(~0 << p));
}

int main() {
    printf("%b\n", setbits(0b1111000000001111, 6, 4, 0b0101101011001111));
    printf("%b\n", setbits_custom(0b1111000000001111, 6, 4, 0b0101101011001111));
    return 0;
}