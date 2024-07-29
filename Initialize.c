#include <stdio.h>

int main()
{
    int marks[31];
    int mark;

    for (int i = 1; i <= 30; i++)
    {
        printf("Enter marks for student with roll number %d: ", i);
        scanf("%d", &mark);
        marks[i] = mark;
    }

    printf("\nMarks of students:\n");
    for (int i = 1; i <= 30; i++)
    {
        printf("Roll Number %d: %d\n", i, marks[i]);
    }
    double average = 0.0;
    for (int i = 1; i <= 30; i++)
    {
        average += marks[i];
    }
    average /= 30.0;
    printf("Average marks: %.2lf\n", average);

    return 0;
}
