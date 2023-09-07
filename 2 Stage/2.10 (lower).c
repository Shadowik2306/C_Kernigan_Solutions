#include <stdio.h>
#include <ctype.h>

void lower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = isupper(str[i]) ? tolower(str[i]) : str[i];
    }
}

int main() {
    char str[] = "HELlo Wo2rld";
    lower(str);
    printf("%s\n", str);
    return 0;
}
