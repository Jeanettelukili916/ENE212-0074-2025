#include <stdio.h>
int main(){
int n;
int i;
int sum=0;
int arr[100];
//number of elements
printf("input number of elements to be stored");
scanf("%d", &n);
//input elements
printf("Input %d the elements to be stored in the array:\n", n);
for (i=0; i<n; i++){
        printf("element-%d:", i);
    scanf("%d",&arr[i]);
    sum += arr[i];
}
printf( "sum of elements stored is:%d\n", sum);
return 0;
}
