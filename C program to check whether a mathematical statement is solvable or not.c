#include <stdio.h>
#include <string.h>

int main() {
    char expr[100];
    int a, b;
    char op;

    printf("Enter a simple mathematical expression (e.g., 3 + 4): ");
    scanf("%d %c %d", &a, &op, &b);

    if (op == '/' && b == 0) {
        printf("Not solvable (division by zero).\n");
    } else if (op == '+' || op == '-' || op == '*' || op == '/') {
        printf("Solvable expression.\n");
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}

