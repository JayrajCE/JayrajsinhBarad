// PROGRAMER : JAYRAJSINH 
// LAST UPDATED : 2/8/24

#include <stdio.h>
void main()
{
    int x = 21 , u , c ;

    do
    {
        printf("Enter the number of matchticks you wnat to pick up for 1 - 4\n");
        scanf("%d" , &u);
        if ( u>4 || u<1 )
            {
                printf("Invalid input\n");
            }
        continue;
        printf("You have picked up %d matchsticks\n" , u);
        c = 5 - u;
        printf("Computer has picked up %d matchsticks\n" , c);
        x = x-5;
        printf( "Matchsticks left %d\n" , x);
        if (x==1)
            {
                goto j;
            }
    } while(1);
    j:
        printf("You are loser\n");
}
