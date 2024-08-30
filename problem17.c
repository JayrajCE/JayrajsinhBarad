#include <stdio.h>
void main()
{
    int  m , n , x , i , a[5][10] ;
    for(m=0 ; m<5 ; m++)
    {
        for(n=0 ; n<10 ; n++)
        {
            a[m][n] = 79 ;
        }
    }
    printf("Enetr the number of seats you want to reserve :");
    scanf("%d" , &x);
    for(i=0 ; i<x ; i++)
    {
        printf("Enter the row and seat number for reserved seat %d  (e.g , 2 5): " , i+1);
        scanf("%d" , &m);
        scanf("%d" , &n);
        a[m-1][n-1] = 88;
    }
    printf("\nSeating Chart:\n");
    for(m=0 ; m<5 ; m++)
    {
        printf("ROW %d : " , m+1);
        for(n=0 ; n<10 ; n++)
        {
            printf(" %c " , a[m][n]);
        }
        printf("\n");
    }

}

    
