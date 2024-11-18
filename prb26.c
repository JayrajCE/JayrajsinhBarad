#include <stdio.h>
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
void main()
{
    struct team teams[20];
    add(teams);
}

//void add(struct team_data []);
void add( struct team teams [])
{
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
}
