#include<stdio.h>


void changeNumber_CBV(int n)
{
    n++;
    printf("In function value : %d\n",n);
}

void changeNumber_CBR(int n)
{
    
}

int main()
{
    int n=3;
    changeNumber(n); // Call by Value

    int * ptr_n = &n;
    changeNumber_CBR(ptr_n);
    printf("%d\n",n);
    return 0;
}