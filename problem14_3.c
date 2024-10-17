// Porgramer : Jayrajsinh
// Aim : To print the pattern of 0 and 1.
// Last updated : 07/09/24

#include <stdio.h>
void main()
{
    int n , r , c , x ;
    printf("Enter number of rows: ");
    scanf("%d" , &n);
    printf("\n");
    // The outer fo loop rotates the rows of patterns. 
    for(r=1 ; r<=n ; r++)
    {
        for(c=1 ; c<=(n-r) ; c++)
        {
            printf("   ");
        }
         x=65;
          // The below 2 for loop prints the elements of pattern coloums vise. 
        for(c=1 ; c<=r ; c++)
        {
            printf(" %c " , x);
            x++;
        }
        x = x-2;
        for(c=1 ; c<=r-1 ; c++)
        {
            printf(" %c " , x);
            x--;
        }
        printf("\n");
    }
}