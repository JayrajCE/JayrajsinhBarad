// PROGRAMER : JAYRAJSINH 
// Aim : To make the matchsticks game.
// LAST UPDATED : 02/08/24

#include <stdio.h>
void main()
{
    int x = 21 , u , c ;
    do
    {
        printf("Enter the number of matchsticks you wnat to pick up for 1 - 4\n");
        scanf("%d" , &u);
        if ( u>4 || u<1 )
            {
                printf("Invalid input\n");
            }
        continue;
        printf("You have picked up %d matchsticks\n" , u);
        // The below statment calculate the number of matchstiks to be picked by computer.
        c = 5 - u;
        printf("Computer has picked up %d matchsticks\n" , c);
        // The below statment calculates the number of left matchstciks.
        x = x-5;
        printf( "Matchsticks left %d\n" , x);
        if (x==1)
            {
                goto j;
            }
    } while(1);
    j:
        printf("You lost the game\nBetter luck next time!!\n");
}
