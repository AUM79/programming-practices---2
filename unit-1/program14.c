//  Q14)Enter a string and print it in reverse order with using string function and without string function
//WITH STRING
#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Enter a string: ");
    gets(string);


    strrev(string);

    printf("Reversed string: %s\n", string);

    return 0;
}


