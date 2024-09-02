#include <stdio.h>
void main()
{
    char str1[50] , str2[50] ;
    int i , j , lenght;
    printf("Enter your note\n");
    gets(str1);
    for(i=0 ; str1[i] != '\0' ; i++)
    {
        lenght++;
    }
   // printf("Lenght of string is %d"  , lenght);
    for(j=0 , i=lenght-1 ;  i>=0 ; j++ , i--)
    {
        str2[j] = str1[i] ;
    }
    str2[j] = '\0' ;
    printf("%s" , str2);




}
