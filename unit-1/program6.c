//6. Enter N elements and arrange them in reverse order.


#include <stdio.h>

int main(){
int n,i;

printf("enter number of elements: ");
scanf("%d",&n);

int arr[n], rev[n];

printf("enter %d elements: \n",n);
for (i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
    rev[i]=arr[n-1-i];
}

printf("array in reverse order: \n");
for(i=0;i<n;i++){
    printf("%d ",rev[i]);
}
return 0;}
