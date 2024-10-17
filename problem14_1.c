// Porgramer : Jayrajsinh
// Aim : To print the pattern of 0 and 1.
// Last updated : 07/09/24
#include <stdio.h>
void main()
{
    int i , j , r , c ;
    printf("Enter the number of rows\n");
    scanf("%d" , &r);
    printf("\n");
    // The outer fo loop rotates the rows of patterns. 
    for(i = 1;i<=r;i++)
    {
        // The inner for loop prints the elements of pattern coloums vise 
        for(j = 1;j<=i;j++)
        {
            // The if condition checks wether the coloum of pattern is even or odd and accordingly prints 1 or o.
            if(j%2 != 0 )
            {
                printf(" 1 ");
            }
            else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

}
