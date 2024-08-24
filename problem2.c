#include <stdio.h>
void main()
{
    int lenght = 50  , breath = 30 , area = 0 , perimeter = 0 ;
    perimeter = 2*(lenght + breath);
    area = lenght*breath;
    printf("The perimeter of rectangular plot is %dcm\n" , perimeter);
    printf("The area of the rectangular plot is %dcm^3" , area);
}