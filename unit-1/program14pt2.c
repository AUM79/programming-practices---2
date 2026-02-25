//Enter a string and print it in reverse order with using string function and without string function
//WITH string

#include <stdio.h>

int main() {
    char string[100];
    int i, length = 0;

    printf("Enter a string: ");
    gets(string);


    while (string[length] != '\0') {
        length++;
    }


    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
