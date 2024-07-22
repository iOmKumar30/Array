#include <stdio.h>

int main()
{
    int n, target, index = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target number: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        printf("The target number %d is found at index %d.\n", target, index);
    }
    else
    {
        printf("The target number %d is not found in the array.\n", target);
    }

    return 0;
}
