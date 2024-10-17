// Programer : Jayrajsinh
// Aim : To seprate number depending on wether they are even or odd and positive or negaive.
//Last updated : 11/09/24

#include <stdio.h>
void main()
{
    int arry[25] , even =0  , odd = 0, negative = 0 , positive = 0 , i ;
    printf("Enter any 25 numbers\n");
    // The below for loop takes the input of numbers in array.
    for(i = 0 ; i<25 ; i++)
    {
        scanf("%d" , &arry[i]);
    }
    for(i=0 ; i<25 ; i++)
    {
        // The below if condition checks wether the number is positive or not.
        if(arry[i]>0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
        // The below if condition checks wether the number is even or not.
        if(arry[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("NUmber of even number is %d\n" , even);
    printf("NUmber of odd number is %d\n" , odd);
    printf("NUmber of positive number is %d\n" , positive);
    printf("NUmber of negative number is %d\n" , negative);
}