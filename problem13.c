#include <stdio.h>
void main()
{
    int r , c , i , j ;
    printf("Enter the size of tabe vertically \n");
    scanf("%d" , &c);
    printf("Enter the size of table horizontally\n");
    scanf("%d" , &r);
    printf("The table of %d X %d\n", r,c);
    for( i = 1 ; i<=r ; i++)
    {
        for(j = 1 ; j<=c ; j++)
        {
            printf("%3d\t" , i*j);

        }
         printf("\n");
    }

}
