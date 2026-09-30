#include <stdio.h>
int main() {
//variable declaration
int correctpin=1234;
int userpin;
int count=0;
do{
//prompt and capture
printf("input userpin");
scanf("%i",&userpin);
//check length
if(userpin<=999){
  printf("wrong pin length");}
  else if(userpin>9999){
        printf("wrong pin length");}
  //access grant
  else if(userpin==correctpin){
    printf("Access Granted");
  }
  else if (userpin!=correctpin){
    printf("Access Denied");}
  else{printf("you can't access");}
  count++;
  }while(count<3);
  return 0;
}

