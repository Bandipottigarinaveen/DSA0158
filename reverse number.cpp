#include <stdio.h>

void reverseString(char str[]) {
    if (str[0] == '\0') {
        return;
    }
    reverseString(str + 1);
    printf("%c", str[0]);
}

int main() {
    char str[] = "Hello, Recursion!";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    reverseString(str);
    printf("\n");
    return 0;
}

