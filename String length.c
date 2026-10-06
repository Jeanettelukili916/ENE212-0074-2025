#include <stdio.h>
#include <string.h>
int main(){
    //variable declaration
    char username[100];
    int length;
    //capturing name
  printf("enter username");
  scanf("%s",username);
  //results
  printf("username is %s\n", username);
length= strlen(username);
  printf("length of username is: %d\n", length);
return 0;
}
