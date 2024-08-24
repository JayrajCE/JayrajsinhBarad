// PROGRAMER : JAYRAJSINH
// LAST UPDATED : 2/8/24
// AIM : TO MAKE A TIMER
#include <stdio.h>
void main()
{
    int x;
    printf("Enter the number for which you want to set timmer for\n");
    scanf("%d" , &x);
    printf("THE TIMER STARTS NOW\n");
    for(int i=x ; i>=0 ; i--)
    {
        // SLEEP IS USED TO DELAY THE OUTPUT FOR DESIRED TIME
        sleep(1);
        printf("%d\n" , i);
    }
}
