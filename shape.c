
// PROGRAMER : JAYRAJSINH
// LAST UPDATED : 29/7/24

#include <stdio.h>
void main()
{
    int  z , x , y ;
    printf("Enetr your shape\n For cricle -1\n For square - 2\n For rectangle - 3\n For triangle - 4\n");
    scanf("%d" , &z);

    switch(z)
    {
    case 1:
        {
          printf("Enter  radius\n");
          scanf("%d" , &y);
          printf(" Enter your colour\nEnter 11 for red\nEnter 12 for blue\nEnter 13 for yellow\n");
          scanf("%d" , &x);


         if (x==11)
         {
             printf( "I have red cricle of area %d" , 3.14*y*y);
         }
         else if (x==12)
         {
             printf( "I have blue cricle of area %d" , 3.14*y*y);
         }
         else
         {
              printf( "I have yellow  cricle of area %d" , 3.14*y*y);
         }
         break;
        }
    case 2:
        {

            printf("Enter lenght \n");
            scanf("%d" , &y);
            printf(" Enter your colour\nEnter 11 for red\nEnter 12 for blue\nEnter 13 for yellow\n");
            scanf("%d" , &x);

            if (x==11)
         {
            printf("I have red square with area  %d\n" , y*y);
         }
         else if (x==12)
         {
              printf("I have blue square with area  %d\n" , y*y);

         }
         else
         {
             printf("I have yellow square with area  %d\n" , y*y);
         }
         break;
        }
    }

}
