//Check the string is palindrome or not.


#include <stdio.h>
#include <string.h>

int main() {
    char string[100], temp[100];

    printf("Enter a string: ");
    gets(string);


    strcpy(temp, string);

    strrev(temp);

    if (strcmp(string, temp) == 0) {
        printf("\n\"%s\" is a PALINDROME\n", string);
    } else {
        printf("\n\"%s\" is not a PALINDROME\n", string);
    }

    return 0;
}
