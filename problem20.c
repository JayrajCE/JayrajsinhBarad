


#include <stdio.h>

void message(); 
int collect();
void display(int); 
int average(int); 

void main()
{
    message();
    int y = collect();  // Collect number of students
    display(y);          // Display grades
    int avgStudent = average(y);  // Calculate average grade
    printf("\nThe average grade of the students is: %d\n", avgStudent);  // Print average
  printf("\nProgramer : Jayrajsinh\nID : 24CE006");

}

void message()
{
    printf("Welcome to CHARUSAT University!\n");
    printf("===============================\n");
}

int collect()
{
    int x;
    printf("Enter the number of Students : \n");
    scanf("%d", &x);
    return x;
}

void display(int a)
{
    int arr[a];  // Declare array to store grades
    printf("Students Grades:\n");
    for (int k = 0; k < a; k++)
    {
        printf("Enter the grade for student %d: ", k + 1);
        scanf("%d", &arr[k]);
        printf("Student %d: Grade = %d\n", k + 1, arr[k]);
    }
}

int average(int b)
{
    int sum = 0;
    int arr[b];  // Declare array to store grades
    for (int k = 0; k < b; k++)  // Collect grades for average calculation
    {
        printf("Enter the grade for student %d (for average calculation): ", k + 1);
        scanf("%d", &arr[k]);
        sum += arr[k];  // Accumulate the sum of grades
    }

    int avg = sum / b;  // Calculate average
    return avg;  // Return the average grade
}
