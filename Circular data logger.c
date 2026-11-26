#include <stdio.h>
#define BUFFER_SIZE 5
int buffer[BUFFER_SIZE];
int head=0;
int count=0;
// function to insert new sample into the buffer
void insertSample(int value){
buffer[head]= value;
head=(head+1) % BUFFER_SIZE;
if (count< BUFFER_SIZE){
count++;
}
}
//function to print all stored samples
void printSamples(){
//oldest element is at index 0
int oldestindex=(count==BUFFER_SIZE) ? head:0;
printf("Stored Samples: ");
for( int i =0; i<count; i++){
    int index = (oldestindex + i) %BUFFER_SIZE;
    printf("%d ", buffer[index]);
}
printf("\n");
}
int main(){
int input;
printf("Buffer size= %d\n", BUFFER_SIZE);
printf("Enter sensor readings:\n");
while (1){
    printf("New sensor value:");
    scanf("%d", &input);
    if(input == -1){
        break;
    }
    insertSample(input);
    printSamples();
}
return 0;
}

