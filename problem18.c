#include <stdio.h>
#include <string.h>
void main()
{
    char name[5][10],t[10] ;
    int n, i, j ;

    printf("Enter number of student :");
    scanf("%d", &n);

    for(i=0; i<n ; i++)
    {
        printf("Enter student name : ");
        scanf("%s", name[i]);
        fflush(stdin);
    }
    printf("\n\n");
    printf("Names arranged in alphabatical order :\n");
    for(i=0; i<(n-1) ; i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(strcmp(name[i], name[j])>0)
            {
                strcpy(t, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], t);
            }

        }
    }

    for(i=0 ; i<n ; i++)
    {
        printf("%s\n", name[i]);
    }
    printf("\nProgramer : Jayrajsinh\nID : 24CE006");
}
