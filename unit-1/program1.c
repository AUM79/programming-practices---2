#include<stdio.h>
int main()
{

int i,j;
int arr[50];

printf("enter elements:" );
scanf("%d",&j);

printf("enter %d elements :",j);
for(i=0;i<j;i++){
    scanf("%d",&arr[i]);
}

printf("your elements are: \n");
for(i=0;i<j;i++){
    printf("%d\n",arr[i]);
}
return 0;}
