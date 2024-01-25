#include <stdio.h>

void escape(char s[], char t[]) {
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            default:
                t[j++] = s[i];
                break;
        }
    }
    t[j] = '\0';
}

void reverse_escape(char s[], char t[]) {
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\\') {
            i++;
            if (s[i] == '\0') {
                t[j++] = '\\';
                break;
            }
            switch (s[i]) {
                case 'n':
                    t[j++] = '\n';
                    break;
                case 't':
                    t[j++] = '\t';
                    break;
                default:
                    t[j++] = '\\';
                    i--;
                    break;
            }
        }
        else {
            t[j++] = s[i];
        }
    }
    t[j] = '\0';
}

int main() {
    int size = 20;
    int count_special = 5;
    char s[] = "he\nll\t ni\n";
    char t[size + count_special];
    char k[size];
    escape(s, t);
    printf("%s\n", t);
    reverse_escape(t, k);
    printf("%s", k);
    return 0;
}
