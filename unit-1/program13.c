//Q13. Enter a string and find out length of string with using string function and without string function.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        length++;
        i++;
    }

    printf("Length of the string (without using strlen) = %d", length);

    return 0;
}
