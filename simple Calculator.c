#include <stdio.h>
int main() {
    //variable declaration
double firstnumber, secondnumber, result;
char arithmeticoperator;
// capturing input
printf("Enter first number");
scanf("%lf", &firstnumber);
printf("enter arithmetic operator (+,-,*,/)");
scanf(" %c", &arithmeticoperator);
printf("enter second number");
scanf("%lf", &secondnumber);
//performing calculation
switch(arithmeticoperator){
case '+':
    result=firstnumber+secondnumber;
    printf("result = %.2lf\n",result);
    break;
case '-':
    result=firstnumber-secondnumber;
    printf("result = %.2lf\n",result);
    break;
case '*':
    result=firstnumber*secondnumber;
    printf("result = %.2lf\n",result);
    break;
case '/':
    if (secondnumber !=0){
        result=firstnumber/secondnumber;
        printf("result = %.2lf\n",result);
        } else {
        printf("error.\n");
        }
        break;
default:
    printf("Error! Invalid arithmetic operator.\n");
        }

        return 0;
    }
