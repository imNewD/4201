#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int element;

    i = 0;
   
    while (i < size / 2)
    {
        element = tab[i];                     
        tab[i] = tab[size - i - 1];          
        tab[size - i - 1] = element;         
        i++;                                  
    }
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};    int size = sizeof(arr) / sizeof(arr[0]); 
    ft_rev_int_tab(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
