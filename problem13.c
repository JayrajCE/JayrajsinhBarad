// Programer : Jayrajsinh
// Aim : To print a multiplication table
// Last updated : 07/09/24

#include <stdio.h>
void main()
{
    int r , c , i , j ;
    printf("Enter the size of tabe vertically : ");
    scanf("%d" , &c);
    printf("Enter the size of table horizontally : ");
    scanf("%d" , &r);
    printf("The table of %d X %d\n\n", r,c);
    // The outer for loop prints the row to the table    for( i = 1 ; i<=r ; i++)
    {
        // The inner for loop prints the coloums of the table.
        for(j = 1 ; j<=c ; j++)
        {
            printf("%3d\t" , i*j);

        }
         printf("\n");
    }
    printf("\nProgramer : Jayrajsinh\nID : 24CE006");
}
