#include <stdio.h>
int main(){
int n;
int i;
int value;
int pos;
//number of elements
printf("input size of the array:");
scanf("%d", &n);
int arr[n+1];
//input elements
printf("Input %d the elements to be stored in the array:\n", n);
for (i=0; i<n; i++){
        printf("element-%d:", i);
    scanf("%d",&arr[i]);
}
//read new value
printf("Input new value to be inseted:");
scanf("%d", &value);
printf( "Insert position of the new value:");
scanf("%d", &pos);
//print current list
printf( "Current list of array is:");
for(i=0; i<n; i++){
    printf("%d", arr[i]);
}
for(i=n; i>=pos; i--){
    arr[i]=arr[i-1];
}
//inserting new value
arr[pos-1]=value;
printf("\n new list is:");
for(i=0; i<=n; i++){
    printf("%d", arr[i]);
}
printf("\n");
return 0;
}
