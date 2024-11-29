#include <stdio.h>
int main()
{
    int marks[10] , distiction=0 , fristclass=0 , pass=0  , fail=0 , *p , i ;
    printf("Enter marks for 10 students\n");
    p = marks;
    for(i=0 ; i<10 ; i++)
    {
        printf("Student %d : " , i+1);
        scanf("%d" , p);
        p++;
    }
     p = marks;
     for(i=0 ; i<10 ; i++)
     {
         if(*p >= 70)
         {
             distiction++;
         }
         else if(*p >= 60)
         {
             fristclass++;
         }
         else if(*p >=40)
         {
             pass++;
         }
         else
         {
             fail++;
         }
        p++;
     }
     printf("\n")
     printf("DISTICTION : %d\n" ,distiction );
     printf("FRISTCLASS : %d\n" ,fristclass);
     printf("PASS : %d\n" ,pass);
     printf("FAIL : %d" , fail);

}
