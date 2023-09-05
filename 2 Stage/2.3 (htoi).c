#include <stdio.h>
#include <ctype.h>


int htoi(char s[]) {
    int i = 0;
    unsigned int res = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }
    for (; s[i] != '\0'; i++) {
        res *= 16;
        if (isdigit(s[i])) res += s[i] - '0';
        else if (islower(s[i])) res += s[i] - 'a' + 10;
        else res += s[i] - 'A' + 10;
    }
    return res;
}



int main() {
    printf("%d\n", htoi("0xF6"));
    return 0;
}