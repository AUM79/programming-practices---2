//Write a function to print names of students whose grade is greater than 5.0.

#include <stdio.h>

#define SIZE 5


struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};


void printAboveFive(struct student s[]) {
    int i;
    printf("\nStudents with grade greater than 5.0:\n");

    for(i = 0; i < SIZE; i++) {
        if(s[i].score > 5.0) {
            printf("%s\n", s[i].name);
        }
    }
}

int main() {
    struct student s[SIZE];
    int i;


    for(i = 0; i < SIZE; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Department: ");
        scanf(" %[^\n]", s[i].department);

        printf("Enter Year of Joining: ");
        scanf("%d", &s[i].year_of_joining);

        printf("Enter Score: ");
        scanf("%f", &s[i].score);
    }


    printAboveFive(s);

    return 0;
}
