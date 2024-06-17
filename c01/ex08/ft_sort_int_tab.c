#include <stdio.h>

void swap(int *a, int *b)
{
    int i;

    i = *a;
    *a = *b;
    *b = i;
}

void ft_sort_int_tab(int *tab, int size)
{
    int i, j;

    i = 1;
    while (i < size)
    {
        j = i;
        while (j > 0 && *(tab + j - 1) > *(tab + j))
        {
            swap(tab + j, tab + j - 1);
            j--;
        }
        i++;
    }
}

int main(void)
{
    int arr[] = {5, 2, 9, 1, 5, 6};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    ft_sort_int_tab(arr, size);

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); 
        }
    return 0;
}
