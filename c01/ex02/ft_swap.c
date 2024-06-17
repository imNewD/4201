#include <stdio.h>


void ft_swap(int *a, int *b)
{
    int i;

    i = *a;
    *a = *b;
    *b = i;
}

int main(void)
{
    int x = 1;  
    int y = 22; 

    printf("Before: x = %d, y = %d\n", x, y); 

    ft_swap(&x, &y); 

    printf("After: x = %d, y = %d", x, y); 

    return (0);
}
