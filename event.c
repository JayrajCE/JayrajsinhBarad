#include <stdio.h>
void main()
{
    int day , sum = 0, i ;
    printf("Enter the number of days you want to find the cost for\n");
    scanf("%d" , &day);
    for(i = 1 ; i<=day ; i++)
    {
        if (i%2 == 0)
        {
            sum =sum +200;
        }
    }
    printf("The management need to allocate a budget of %dRs" , sum);
}
