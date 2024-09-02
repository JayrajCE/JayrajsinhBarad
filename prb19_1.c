#include <stdio.h>
void main()
{
    int   lenght=0 , i ;
    char str[50];
    printf("Enter your note\n");
    scanf("%s" , str);
    for(i=0 ; str[i] != '\0' ; i++)
    {
        lenght++;
    }
    printf("Lenght of string is %d"  , lenght);
}
