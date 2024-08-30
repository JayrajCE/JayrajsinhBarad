#include <stdio.h>
void main()
{
    int n , r , c , x ;
    printf("Enter number of rows: ");
    scanf("%d" , &n);
    printf("\n");
    for(r=1 ; r<=n ; r++)
    {
        for(c=1 ; c<=(n-r) ; c++)
        {
            printf("   ");
        }
         x=65;
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