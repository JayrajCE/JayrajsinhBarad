#include <stdio.h>
void main()
{
    int n , p , i , arry[10] , t ;
    printf("Enter the number of item (1-10)\n");
    scanf("%d" , &n);
    printf("Enter the price of items\n");
    for(i=0 ; i<n ; i++) 
    {
        printf("The price of %dst item: " , i+1);
        scanf("%d" ,&arry[i]);
    }
     for(int i = 0 ; i<=4 ; i++)
    {
        for(int p = i+1 ; p<=4 ; p++)
        if(arry[i]>arry[p])
        {
            t = arry[i];
            arry[i]=arry[p];
            arry[p]=t;
        }
    }
   for(int i = 0 ; i<n ; i++)
     {
         printf("%d " , arry[i]);
     } 
}