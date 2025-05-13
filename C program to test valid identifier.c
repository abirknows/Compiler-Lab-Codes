#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isValidIdentifier(const char *str) {
    if (!isalpha(str[0]) && str[0] != '_')
        return false;

    for (int i = 1; str[i]; i++) {
        if (!isalnum(str[i]) && str[i] != '_')
            return false;
    }

    return true;
}

int main() {
    char str[100];

    printf("Enter an identifier: ");
    scanf("%s", str);

    if (isValidIdentifier(str))
        printf("Valid identifier.\n");
    else
        printf("Invalid identifier.\n");

    return 0;
}

