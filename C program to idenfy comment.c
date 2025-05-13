#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];

    printf("Enter a line of code:\n");
    fgets(line, sizeof(line), stdin);

    // Remove newline character if present
    size_t len = strlen(line);
    if (len > 0 && line[len - 1] == '\n') {
        line[len - 1] = '\0';
    }

    // Check for single-line comment
    if (line[0] == '/' && line[1] == '/') {
        printf("This is a single-line comment.\n");
    }
    // Check for multi-line comment start and end
    else if (line[0] == '/' && line[1] == '*') {
        int n = strlen(line);
        if (n >= 4 && line[n - 2] == '*' && line[n - 1] == '/') {
            printf("This is a complete multi-line comment.\n");
        } else {
            printf("This is the start of a multi-line comment.\n");
        }
    } else {
        printf("This is not a comment.\n");
    }

    return 0;
}

