#include <stdio.h>
#include<string.h>
int count = 0;
struct coach
    {
        char cn[20];
        int age;
        float exp;
    };
struct team
{
    char tn[20];
    char st[20];
    struct coach coach;
};
void add(struct team []);
void search (struct team []);
void display(struct team []);
void main()
{
    int x;
    struct team teams[20];
    while(1)
    {
        printf("\nEnter 1 to add team\nEnter 2 to dispaly teams\nEnter 3 to search teams\n");
        printf("Your choice : ");
        scanf("%d" , &x);
        fflush(stdin);
        switch(x)
        {
            case 1 :
                add(teams);
                break;
            case 2 :
                display(teams);
                break;
            case 3 :
                search(teams);
                break;
            default :
                printf("Invalid choice");
                break;
        }
    }
}
void add( struct team teams [])
{
    printf("\n");
    printf("Enter team name : ");
    gets(teams[count].tn);
    fflush(stdin);
    printf("Enter sports type : ");
    gets(teams[count].st);
    fflush(stdin);
    printf("Enter coach name : ");
    gets(teams[count].coach.cn);
    printf("Enter coach age : ");
    scanf("%d" , &teams[count].coach.cn);
    printf("Enter coach expirence : ");
    scanf("%f" , &teams[count].coach.exp);
    count++;
}
void search(struct team teams [])
{
    int found=0;
    if ( count == 0)
    {
        printf("No teams found for scearch");
    }
    int i;
    char name[20];
    printf("Enter team name to screached : ");
    gets(name);
    for( i = 0 ; i<count ; i++)
    {
        if(strcmp(name , teams[i].tn) == 0)
        {
            printf("Team Name : ");
            puts(teams[i].tn);
            printf("Sports type : ");
            puts(teams[i].st);
            printf("Coach name : ");
            puts(teams[i].coach.cn);
            found++;
        }
    }
    if (found == 0)
    {
        printf("NO such team found\n");
    }
}
void display(struct team teams [])
{
    printf("\n");
    int i;
    if(count == 0)
    {
        printf("No teams to displayed");
    }
    else
    {
        for( i=0; i<count ; i++)
        {
            printf("Team Name : ");
            puts(teams[i].tn);
            printf("Sports type : ");
            puts(teams[i].st);
            printf("Coach name : ");
            puts(teams[i].coach.cn);
        }
    }
    printf("\n\nProgramer : Jayrajsinh\nID : 24CE006");
}
