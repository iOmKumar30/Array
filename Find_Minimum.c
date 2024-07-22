#include <stdio.h>

int main()
{
    int n, i, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    min = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("The minimum element in the array is: %d\n", min);

    return 0;
}
