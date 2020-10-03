#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        printf("Your array is already full can't add more elements");
        return -1;
    }

    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}

int main()
{
    int arr[100] = {2, 35, 75, 91, 98};
    int size = 5, element = 45, index = 2;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size += 1;
    printf("Array after insertion is: \n");
    display(arr, size);
    return 0;
}