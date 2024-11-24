// Programer : Jayrajsinh
// Aim : To calculate the cost of hosting a event on even days only. 
// Last updated : 05/09/24 

#include <stdio.h>
void main()
{
    int day , sum = 0, i ;
    printf("Enter the number of days you want to find the cost for : ");
    scanf("%d" , &day);  
    // The below for loop helps to claculate the cost the cost. 
    for(i = 1 ; i<=day ; i++) 
    {
        // The if condition checks wehter the day is even or not. 
        if (i%2 == 0)
        {
            sum = sum +200;
        }
    }
    printf("The management need to allocate a budget of %dRs\n" , sum);
    printf("\nProgramer : Jayrajsinh\nID : 24CE006");
}
