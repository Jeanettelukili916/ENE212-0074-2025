#include <stdio.h>
int main(){
int n;
int i;
int j;
int count;
int arr[100];
printf("print all unique elements in the array\n");
printf("---------------------------------------\n");
//number of elements
printf("input number of elements to be stored");
scanf("%d", &n);
//input elements
printf("Input %d the elements to be stored in the array:\n", n);
for (i=0; i<n; i++){
        printf("element-%d:", i);
    scanf("%d",&arr[i]);
}
printf("The unique elements are:\n");
for (i=0; i<n; i++){
    count=0;
    for(j=0; j<n; j++){
        if(i !=j && arr[i]== arr[j]){
           count++;}
    }
    if(count==0){
        printf("%d", arr[i]);
    }
}
printf("\n");
return 0;
}
