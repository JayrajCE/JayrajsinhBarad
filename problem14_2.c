#include <stdio.h>
void main()
{
    int n , r , c ;
    printf("Enter number of row: ");
    scanf("%d" , &n);
    printf("\n");
    for(r=1 ; r<=n ; r++)
    {
       for(c=1 ; c<=n-r ; c++)
       {
            printf("   ");
       }
       for(c=1 ; c<=r ; c++)
       {
            printf(" %d " , c);
       }
       printf("\n");
    }
}