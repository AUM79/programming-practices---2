#include <stdio.h>
#include <string.h>

#define SIZE 5


struct student {
    int rollno;
    char name[20];
    char department[40];
    int year_of_joining;
    float score;
};

int main() {
    struct student s[SIZE], temp;
    int i, j;


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


    for(i = 0; i < SIZE - 1; i++) {
        for(j = 0; j < SIZE - i - 1; j++) {
            if(s[j].score < s[j + 1].score) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }


    printf("\n\n--- Student Records Sorted by Score (Descending) ---\n");

    for(i = 0; i < SIZE; i++) {
        printf("\nStudent %d Details:\n", i + 1);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Department: %s\n", s[i].department);
        printf("Year of Joining: %d\n", s[i].year_of_joining);
        printf("Score: %.2f\n", s[i].score);
    }

    return 0;
}
