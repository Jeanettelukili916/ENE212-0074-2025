#include <stdio.h>
int main(){
int n;
int i;
//number of elements
printf("input number of elements to be stored");
scanf("%d", &n);
int arr[n];
//input elements
printf("Input %d the elements to be stored in the array:\n", n);
for (i=0; i<n; i++){
        printf("element-%d:", i);
    scanf("%d",&arr[i]);
}
//getting maximum and minimum
int max = arr[0];
int min = arr[0];
for( i=1; i<n; i++){
    if(arr[i]> max){
        max= arr[i];
    }
    if(arr[i]< min){
        min= arr[i];
    }
}
printf("Maximum element is: %d\n", max);
printf("Minimum element is: %d\n", min);
return 0;
}
