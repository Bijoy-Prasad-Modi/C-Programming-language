#include <stdio.h>
int countPos(int *ptr, int size)
{
    int var = 0;
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] >= 0)
            var += 1;
    }
    return var;
}

int main()
{
    int n;
    printf("Enter the Size of the Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Array Element No %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Therer are %d positive numbers in the array\n", countPos(arr, n));
    return 0;
}