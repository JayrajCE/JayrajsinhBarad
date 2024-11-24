// PROGRAMER : JAYRAJSINH
// AIM : TO MAKE A TIMER.
// LAST UPDATED : 02/08/24

#include <stdio.h>
void main()
{
    int x;
    printf("Enter the number for which you want to set timmer for : ");
    scanf("%d" , &x);
    printf("THE TIMER STARTS NOW\n");
    for(int i=x ; i>=0 ; i--)
    {
        // SLEEP IS USED TO DELAY THE OUTPUT FOR DESIRED TIME
        sleep(1);
        printf("%2d\r" , i);
    }
    printf("Timer ended\n");
    printf("\nProgramer : Jayrajsinh\nID : 24CE006");
}
