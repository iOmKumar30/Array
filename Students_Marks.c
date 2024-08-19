// store marks of 5 subjects of 5 students and their average marks and then overall average of all students using an 2D array

#include <stdio.h>
int main()
{

    int marks[5][6];

    for (int i = 0; i < 5; i++)
    {
        float average = 0.0f;
        for (int j = 0; j < 5; j++)
        {
            printf("Enter marks of student %d in subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
            average += marks[i][j];
        }
        average /= 5.0f;
        marks[i][5] = average;
    }

    printf("\nMarks of students:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Marks of student %d in subject %d: %d\n", i + 1, j + 1, marks[i][j]);
        }
        printf("Average marks of student %d: %.2f\n", i + 1, marks[i][5]);
    }

    float overall_average = 0.0f;
    for (int i = 0; i < 5; i++)
    {
        overall_average += marks[i][5];
    }
    overall_average /= 5.0f;
    printf("Overall average marks of class: %.2f\n", overall_average);
}