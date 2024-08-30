#include <stdio.h>
void main()
{
    int arry[25] , even =0  , odd = 0, negative = 0 , positive = 0 , i ;
    printf("Enter any 25 numbers\n");
    for(i = 0 ; i<25 ; i++)
    {
        scanf("%d" , &arry[i]);
    }
    for(i=0 ; i<25 ; i++)
    {
        if(arry[i]>0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
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