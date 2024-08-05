#include <stdio.h>
void main()
{
    int i , j , r , c ;
    printf("Enter the number of rows\n");
    scanf("%d" , &r);
    for(i = 1;i<=r;i++)
    {
        for(j = 1;j<=i;j++)
        {
            if(j%2 != 0 )
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

}
