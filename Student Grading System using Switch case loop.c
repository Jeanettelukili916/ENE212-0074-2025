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
    switch (marks/10)
    {
    case 10:
    case 9:
    case 8:
    case 7:
        Grade = 'A';
        break;
    case 6:
        Grade = 'B';
        break;
    case 5:
        Grade = 'C';
        break;
    case 4:
        Grade = 'D';
        break;
    default:
        Grade = 'F';
        break;
    }
    switch(marks /10)
    {
    case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
            case 4:
        printf("Status:Passed\n");
        break;
        default:
        printf("Status: Failed");
        break;
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
