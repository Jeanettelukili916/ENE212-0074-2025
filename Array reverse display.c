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
//display original array
printf("Values stored in the array are:\n");
for(i=0; i<n; i++){
    printf("%d", arr[i]);
}
//display reversed array
printf("\nValues stored in reverse are:\n");
for(i=n-1; i>=0; i--){
        printf("%d", arr[i]);
}
return 0;
}
