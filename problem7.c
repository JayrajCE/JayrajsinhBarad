// Programer : Jayrajsinh
// Aim : To compare wealth of two person.
// Last updated : 16/08/24

#include <stdio.h>
void main()
{
    int raman_bunglow=12000000, raman_plot=6000000, raman_car=3000000, suman_apartment=11000000, suman_hotel=8000000, suman_car=8000000;
    int raman_wealth=0 , suman_wealth=0;
    // The below statment calculates the total wealth of raman.
    raman_wealth =  raman_bunglow + raman_plot + raman_car;

    //The below statment calculates the total wealth of suman.
    suman_wealth = suman_apartment + suman_hotel + suman_car;

    // The below if condition checks wether the wealth of raman is greater than suman. 
    if(raman_wealth>suman_wealth)
    {
        printf("Raman is wealthier");
    }
    // The below elseif condition checks wether the wealth suman is greater than raman.
    else if(raman_wealth<suman_wealth)
    {
        printf("Suman is wealthier");
    }
    else
    {
        printf("Raman and suman are equally wealthier");
    }
}