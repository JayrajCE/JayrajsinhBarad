#include <stdio.h>
void main()
{
    float c , fh ;
    printf("Enter th temprature in degree celsius :");
    scanf("%f" , &c);
    fh = (float)9/5*c + 32;
    printf("The temprature in fahreneit is %f" , fh);
}