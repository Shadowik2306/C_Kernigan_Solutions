#include <stdio.h>
#include <string.h>

/* like strpbrk */

int any(char s1[], char s2[]) {
    int i, j;
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) return i;
        }
    }
    return -1;
}


int main() {
    char s1[] = "Hello World";
    char s2[] = "lord";
    printf("%d\n", any(s1, s2));
    // Using String.h
    printf("%d\n", strpbrk(s1, s2) - s1);
    return 0;
}