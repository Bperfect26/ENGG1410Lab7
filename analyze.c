#include <stdio.h>
#include <string.h>

int main(void) {
    char line[64];
    char reversed[64];
    int len, i, j;
    printf("Enter a line of text:\n");
    if (fgets(line, 64, stdin) == NULL) {
        return 0;
    }
    len = strlen(line);
    if (len > 0 && line[len - 1] == '\n') {
        line[len - 1] = '\0';
        len--;
    }
    i = 0;
    j = len - 1;
    while (j >= 0) {
        reversed[i] = line[j];
        i++;
        j--;
    }
    reversed[i] = '\0';
    printf("Your input in reverse is:\n");
    printf("%s\n", reversed);
    return 0;
}
