#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool match_a(const char *str) {
    return strlen(str) == 1 && str[0] == 'a';
}

bool match_a_star_b_plus(const char *str) {
    int i = 0;

    while (str[i] == 'a') i++;
    if (i == 0) return false; // no 'a' is okay (a* allows zero)
    int j = i;
    while (str[j] == 'b') j++;

    return (j > i) && (str[j] == '\0'); // at least one 'b'
}

bool match_abb(const char *str) {
    return strcmp(str, "abb") == 0;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (match_a(str))
        printf("Matches pattern: 'a'\n");
    else if (match_a_star_b_plus(str))
        printf("Matches pattern: 'a*b+'\n");
    else if (match_abb(str))
        printf("Matches pattern: 'abb'\n");
    else
        printf("No match found.\n");

    return 0;
}

