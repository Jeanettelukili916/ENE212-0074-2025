#include <stdio.h>
#include <string.h>
//function definition
//login function
int login(char username[50], char pin[5]){
char correctusername[50]= "Ruerue";
char correctpin[5]="7891";
int attempts;
while(attempts<3, attempts++){
    printf("Enter username");
    scanf("%49s", username);
    printf("Enter pin");
    scanf("%4s", pin);
    if(strcmp(correctusername,username)==0 && strcmp(correctpin,pin)==0){
        printf("login succesful");
        return 1;}
        else{
            printf("Incorrect username or pin\n");
            return 0;
        }
    }printf("Maximum attempts exceeded");
}
//displaymenu function
void displaymenu(){
printf("\n ENTER YOUR CHOICE OF SERVICE\n");
 printf("1. CheckBalance\n");
 printf("2. Deposit\n");
 printf("3. Withdraw\n");
 printf("4. Exit\n");
    }
    //checkbalance function
    void checkbalance(double balance){
    printf("Account balance is:Ksh %.2f\n", balance);
    }
    //deposit function
    void depositmoney(double *balance){
    double amount;
    printf("Enter Amount to deposit:");
    scanf("%lf", &amount);
    if(amount>0){
        *balance=*balance+amount;
        printf("New account Balance:Ksh %.2f", *balance);
    }else{
    printf("\n invalid deposit amount\n");
    }}
    //withdraw dunction
    void withdrawmoney(double *balance){
    double amount;
    printf("Enter amount to withdraw:");
    scanf("%lf", &amount);
          if(amount<=0){
            printf("Invalid withdrawal amount\n");
            }else if(amount> *balance){
                printf("insufficient balance");
            }else {
            *balance = *balance-amount;
            printf("Amount withdrawn: Ksh %.2f\n",amount);
            printf("New Account Balance: Ksh %.2f\n", *balance);}
    }
    int main(){
        char username[50];
        char pin[5];
        double balance=70000.00;
    int choice;
    //function call
    int result=login(username,pin);
    if(result=1){
        do{
            displaymenu();
            scanf("%d", &choice);
            if(choice==1){
                checkbalance(balance);}
                else if(choice==2){
                    depositmoney(&balance);
                }else if
                (choice==3){
                withdrawmoney(&balance);
                }else if
                (choice==4){
                printf("Thankyou\n");
                } else {
                printf("Invalid choice\n");
                }
                }while (choice !=5);
            }
            return 0;
        }

