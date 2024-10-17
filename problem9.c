// Programer : Jayrajsinh
// Aim : To make a grading system based on users input.
// Last updated : 24/08/24
#include <stdio.h>
void main()
{
    int marks ;
    printf("Enetr your marks(0-100) :");
    scanf("%d" , &marks);
    /* The below combination of statments check where the makrs given by user
     falls and accordingly assigns grades or declare the studentt failed */
    marks>=90 ? printf("You obtian Grade A") : 
    90>marks && marks>=80 ? printf("You obtian A Grade") :
    80>marks && marks>=70 ? printf("You obtian B Grade") :
    70>marks && marks>=60 ? printf("You obtian C Grade") :
    60>marks && marks>=50 ? printf("You obtian F Grade") :
    printf("You fail");
}