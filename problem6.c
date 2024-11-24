// Programer : Jayrajsinh
// Aim : To make a simple caculator.
// Last updated : 14/08/24
#include <stdio.h>
void main()
{
    int a,b;
    char X;
    printf("Enter number a :");
    scanf("%d" , &a);
    fflush(stdin);
    printf("Enter number b :");
    scanf("%d" , &b);
    fflush(stdin);
    printf("Enter + for addition\nEnter - for subtraction\nEnter * for multiplication\nEnter / for  division\nEnter your choice :");
    // The below scanf function takes the input of opreation the user want to perform on the numbers. 
    scanf("%s", &X);
    // The below switch case perform the task according to user choice.
    switch(X)
    {
        case '+' :
        {

            printf("The addition of numbers is %d" , a+b);
            break;
        }
        case '-' :
        {
            printf("The subtraction of numbers is %d" , a-b);
            break;
        }
        case '*' :
        {
           printf("The multiplication of numbers is %d" , a*b); 
           break;
        }
        case '/' :
        {
            printf("The divison of numbers is %f" , a/b);
            break;
        }

    }
    printf("\n\nProgramer : Jayrajsinh\nID : 24CE006");
}