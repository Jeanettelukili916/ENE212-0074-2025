#include <stdio.h>
int main() {
    //variable declaration
    int N,count,marks;
    char RegNo[50], Name[100], Grade;
    //capturing data
    printf("Please enter number of students");
    scanf("%d", &N);
    for (count=1; count<=N; count++)
    {printf("Enter student details\n");
    printf("Enter Registration number:\n");
    scanf("%49s", RegNo);
    printf("Enter student Name:\n");
    scanf("%99s", Name);
    printf("enter student Marks:\n");
    scanf("%d", &marks);
    //providing results
    if(marks>= 70)
    {
      Grade = 'A';
    }
    else if(marks>=60)
    {
        Grade= 'B';
    }
    else if(marks>=50){
        Grade= 'C';
    }
    else if(marks>=40){
        Grade= 'D';}
        else
        {
            Grade= 'F';
        }
    if(marks>= 40)
    {
        printf("Status:Passed\n");
    }
    else
    {
        printf("Status: Failed");
    }
    printf("\n-------------------------\n");
    printf("    STUDENT INFORMATION\n");
    printf("---------------------------\n");
    printf("Registration No: %s\n", RegNo);
    printf("Name: %s\n", Name);
    printf("Marks: %d\n", marks);
    printf("Grade: %c\n", Grade);
    printf("----------------------------\n");
    }
return 0;
}
