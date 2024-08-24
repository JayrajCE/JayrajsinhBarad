// PROGRAMER : JAYRAJSINH
// LAST UPDATED : 26/7/24
// AIM : TO FIND THE TOTAL COST OF FOOD ITEM ORDERD BY COUSTMER


#include <stdio.h>
int main()

{
    int b =0 , pi =0 , p  =0, ff =0 ,x , TOTAL_COST;
    printf("MENU\n1.BURGER = 150RS\n2.PIZZA = 200RS\n3.PASTA = 120RS\n4.FRENCH FRIES = 80RS\n");
    printf("Enter the index number given in menu to select your desired food item\nEnter 0 after finishing your order\n");
    g :printf("Add food item number\n");
    scanf("%d" , &x);
    switch(x)
    {
        case 1:
            {
                b = b+150;
                goto g;
                break;
            }
        case 2:
            {
                pi = pi+200;
                goto g;
                break;
            }
        case 3:
            {
                p = p+120;
                goto g;
                break;
            }
        case 4:
            {
                ff = ff+80;
                goto g;
                break;
            }
        case 0:
            {
                break;
            }
    }
    TOTAL_COST = b+pi+p+ff;
    printf("The total bill is %d", TOTAL_COST);
    return 0;
}
