#include <stdio.h>
void main()
{
    int marks ;
    printf("Enetr your marks(0-100) :");
    scanf("%d" , &marks);

    marks>=90 ? printf("You obtian Grade A") : 
    90>marks && marks>=80 ? printf("You obtian A Grade") :
    80>marks && marks>=70 ? printf("You obtian B Grade") :
    70>marks && marks>=60 ? printf("You obtian C Grade") :
    60>marks && marks>=50 ? printf("You obtian F Grade") :
    printf("You fail");
}