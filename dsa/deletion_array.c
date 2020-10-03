#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int indDeletion(int arr[], int size, int index)
{
    if (size == 0)
    {
        printf("Your array is already empty can't delete more elements");
        return -1;
    }

    else
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        return 1;
    }
}

int main()
{
    int arr[100] = {2, 35, 75, 91, 98};
    int size = 5, index = 2;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    printf("\nArray after deletion is: \n");
    display(arr, size);
    return 0;
}