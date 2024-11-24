// Programer : Jayrajsinh
// Aim : To make ticket booking system for a movie theater.
// Last updated : 16/09/24

#include <stdio.h>
void main()
{
    int  m , n , x , i , a[5][10] ;
    // The below for loop assigns letter capital o to all the seats of movie theater.
    for(m=0 ; m<5 ; m++)
    {
        for(n=0 ; n<10 ; n++)
        {
            a[m][n] = 79 ;
        }
    }
    printf("Enetr the number of seats you want to reserve :");
    scanf("%d" , &x);
    // The below for loop takes the input of the seats users wnat to reserve and assign x to selected seat by the user.
    for(i=0 ; i<x ; i++)
    {
        printf("Enter the row and seat number for reserved seat %d  (e.g , 2 5): " , i+1);
        scanf("%d" , &m);
        scanf("%d" , &n);
        a[m-1][n-1] = 88;
    }
    printf("\nSeating Chart:\n");
    // The outer for loop rotates the row.
    for(m=0 ; m<5 ; m++)
    {
        printf("ROW %d : " , m+1);
        // The inner for loop rotates the coloum and prints the avaliable and reserved seats. 
        for(n=0 ; n<10 ; n++)
        {
            printf(" %c " , a[m][n]);
        }
        printf("\n");
    }
    printf("\nProgramer : Jayrajsinh\nID : 24CE006");

}

    
