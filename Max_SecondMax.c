#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max, second_max;

    if (n < 2)
    {
        printf("Array must have at least two elements to find both maximum and second maximum.\n");
        return 1;
    }

    if (arr[0] > arr[1])
    {
        max = arr[0];
        second_max = arr[1];
    }
    else
    {
        max = arr[1];
        second_max = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        }
    }

    printf("Maximum element: %d\n", max);
    if (n > 1)
    {
        printf("Second maximum element: %d\n", second_max);
    }
    else
    {
        printf("Second maximum element does not exist.\n");
    }

    return 0;
}
