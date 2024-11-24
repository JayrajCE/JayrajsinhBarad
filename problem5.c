// Programer : Jayrajsinh
// Aim : To convert the input temprature taken in dergree celsius into fahreneit.
// Last updated : 04/08/24

#include <stdio.h>
void main()
{
    float c , fh ;
    printf("Enter the temprature in degree celsius :");
    // The below scanf takes input of temprature in degree celsius.
    scanf("%f" , &c);
    fh = (float)9/5*c + 32;
    printf("The temprature in fahreneit is %0.2f" , fh);
    printf("\n\nProgramer : Jayrajsinh\nID : 24CE006");
}