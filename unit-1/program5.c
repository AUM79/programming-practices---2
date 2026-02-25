//Copy the elements of one array into another.
#include <stdio.h>

int main(){
int n,i;

printf("enter size of array: ");
scanf("%d",&n);

int arr1[n],arr2[n];

printf("enter %d elements: \n",n);
for(i=0;i<n;i++){
    scanf("%d",&arr1[i]);
}

for(i=0;i<n;i++){
    arr2[i]=arr1[i];
}

printf("copied array: \n");
for(i=0;i<n;i++){
    printf("%d \n",arr2[i]);
}

return 0;
}
