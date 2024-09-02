#include <stdio.h>
void main()
{
    int   len1=0 , len2=0 , i , j ,x ;
    char str1[50] , str2[50] ;
    printf("Enter your note 1\n");
    gets(str1);
    printf("Enter your note 2\n");
    gets(str2);

    for(i=0 ; str1[i] != '\0' ; i++)
    {
        len1++;
    }
    for(i=0 ; str2[i] != '\0' ; i++)
    {
        len2++;
    }
    if(len1 != len2)
    {
        printf("Both the note are not identical");
    }
    else if (len2 = len1)
    {
        for(i=0 , j=0 ; str1[i] != '\0' ; i++ , j++)
        {
            if(str1[i] != str2[j])
            {
                goto x ;
                break;
            }

        }
        printf("Both the note are identical");
        x :
            printf("Both the note are not identical");



    }

}
