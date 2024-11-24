// Programer : Jayrajsinh
// Aim : To arrange itmes in acending order of their prices.
// Last updated : 13/09/24
#include <stdio.h>
void main()
{
    int n , p , i , arry[10] , t ;
    printf("Enter the number of item (1-10)\n");
    scanf("%d" , &n);
    printf("Enter the price of items\n");
    // The below for loop takes the input of the prices of the itmes. 
    for(i=0 ; i<n ; i++) 
    {
        printf("The price of %dst item: " , i+1);
        scanf("%d" ,&arry[i]);
    }
     for(int i = 0 ; i<=4 ; i++)
    {

        for(int p = i+1 ; p<=4 ; p++)
        // The below if condition ckecks the prices of times and if price of current itthe itme is grater then the
        // other item then it swaps the positon of hte item both.  
            if(arry[i]>arry[p])
        {
            t = arry[i];
            arry[i]=arry[p];
            arry[p]=t;
        }
    }
    // The below for loop prints the rearrange prices of item.
   printf("\nThe prices of items arranged in acending order are as follow\n");
   for(int i = 0 ; i<n ; i++)
     {
         printf("%d " , arry[i]);
     }
     printf("\n\nProgramer : Jayrajsinh\nID : 24CE006");
 
}