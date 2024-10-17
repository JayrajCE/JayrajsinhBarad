// Porgramer : Jayrajsinh
// Aim : To print the pattern of 0 and 1.
// Last updated : 07/09/24

#include <stdio.h>
void main()
{
    int n , r , c ;
    printf("Enter number of row: ");
    scanf("%d" , &n);
    printf("\n");
    // The outer fo loop rotates the rows of patterns. 
    for(r=1 ; r<=n ; r++)
    {
     // The below for loop prints the  required space in pattern coloums vise. 
       for(c=1 ; c<=n-r ; c++)
       {
            printf("   ");
       }
       // The below for loop prints the elements of pattern coloums vise. 
       for(c=1 ; c<=r ; c++)
       {
            printf(" %d " , c);
       }
       printf("\n");
    }
}