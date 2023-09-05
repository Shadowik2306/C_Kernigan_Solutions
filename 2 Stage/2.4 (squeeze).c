#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    int i, j;
    int k = 0;
    while (s1[i] != '\0') {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) break;
        }
        if (s2[j] == '\0') {
            s1[k++] = s1[i];
        }
        i++;
    }
    s1[k] = '\0';
}


int main() {
    char s1[] = "Hello World";
    char s2[] = "lord";
    squeeze(s1, s2);
    printf("%s", s1);
    return 0;
}