#include <stdio.h>
void main()
{
    int a,b;
    char X;
    printf("Enter number a\n");
    scanf("%d" , &a);
    printf("Enter number b\n");
    scanf("%d" , &b);
    fflush(stdin);
    printf("Enter + for addition\nEnter - for subtraction\nEnter * for multiplication\nEnter / for  division\n");
    scanf("%s", &X);
    fflush(stdin);

   



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
           printf("The muktiplication of numbers is %d" , a*b); 
           break;
        }
        case '/' :
        {
            printf("The divison of numbers is %d" , a/b);
            break;
        }

    }
}