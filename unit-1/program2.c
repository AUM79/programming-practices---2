#include<stdio.h>
// Enter N elements and find total and average of them.
int main()
{

int i[50];
int h,j;
int total = 0;
float avg;

printf("enter no. of elements: ");
scanf("%d",&h);

printf("enter %d elements");
for(j=0;j<h;j++){
   scanf("%d",&i[j]);
total = total + i[j];
}


return 0;
}

