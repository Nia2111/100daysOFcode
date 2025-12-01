#include <stdio.h>

int main() {
    FILE *fp;
    char text[500];

    fp = fopen("info.txt", "a");

    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    printf("Enter a line to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Text successfully appended.\n");

    return 0;
}
