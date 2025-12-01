#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int capitalize = 1;

    for (int i = 0; s[i] != '\0'; i++) {

        if (capitalize && isalpha(s[i])) {
            s[i] = toupper(s[i]);
            capitalize = 0;
        } 
        else {
            s[i] = tolower(s[i]);
        }

        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
            capitalize = 1;
    }

    printf("%s", s);
    return 0;
}
