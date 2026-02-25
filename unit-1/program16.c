//Compare two strings and find out they are same or not.


#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    printf("Enter first string : ");
    gets(string1);

    printf("Enter second string: ");
    gets(string2);

   if (strcmp(string1, string2) == 0) {
        printf("\nStrings are SAME\n");
    } else {
        printf("\nStrings are not SAME\n");
    }

    return 0;
}
