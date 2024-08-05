#include <stdio.h>
int main()


{
    int n;
    printf("GIve me a number:");
    scanf("%d",&n);
    for (int i=n ; i>=0 ; i--)
    {
        sleep(1);
        
        printf("%2d\r",i);
    }

   

    return 0;
}