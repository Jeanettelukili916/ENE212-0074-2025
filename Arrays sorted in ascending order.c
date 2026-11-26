#include <stdio.h>
int main(){
int n,i,j,temp;
//reading array size
printf("Enter the size of the array:");
scanf("%d", &n);
int arr[n];
// input elements
printf("Enter %d elements in the array: \n", n);
for(i=0; i<n; i++){
    printf("Element-%d:", i);
    scanf("%d", &arr[i]);
}
//sorting
for (i=0; i<n-1; i++){
    for(j=i+1; j<n; j++){
        if( arr[i]> arr[j]){
            temp = arr[i];
            arr[i]= arr[j];
            arr[j]= temp;
        }
    }
}
printf("Elements sorted in ascending order:");
for (i=0; i<n; i++){
    printf("%d", arr[i]);
}
printf("\n");
return 0;
}
