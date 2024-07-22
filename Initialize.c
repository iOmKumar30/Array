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

    return 0;
}
