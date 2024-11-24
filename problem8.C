// PROGRAMER : JAYRAJSINH
// AIM : TO FIND THE TOTAL COST OF FOOD ITEM ORDERD BY COUSTMER.
// LAST UPDATED : 26/7/24


#include <stdio.h>
int main()
{
    int burger=0 , pizza=0 , pasta=0, frenchfries=0 ,x , TOTAL_COST;
    // The below printf function prints entire meun of food items.
    printf("MENU\n1.BURGER = 150RS\n2.PIZZA = 200RS\n3.PASTA = 120RS\n4.FRENCH FRIES = 80RS\n\n");
    printf("Enter the index number given in menu to select your desired food item\nEnter 0 after finishing your order\n\n");
    g :printf("Add food item number\n");
    scanf("%d" , &x);
    // The below switch case calculate the cost of food item orderd by user.
    switch(x)
    {
        
        case 1:
            {
                 burger =  burger+150;
                goto g;
                break;
            }
        case 2:
            {
                pizza = pizza+200;
                goto g;
                break;
            }
        case 3:
            {
                pasta = pasta+120;
                goto g;
                break;
            }
        case 4:
            {
                frenchfries = frenchfries+80;
                goto g;
                break;
            }
        case 0:
            {
                break;
            }
    }
    // The  below statment calculates the total cost all food item ordered by the user.
    TOTAL_COST = burger+pizza+pasta+frenchfries;
    printf("\nThe total bill is %dRs\n", TOTAL_COST);
    printf("\nProgramer : Jayrajsinh\nID : 24CE006");
    return 0;
}
