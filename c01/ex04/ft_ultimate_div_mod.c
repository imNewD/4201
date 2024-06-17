#include <stdio.h>


void ft_ultimate_div_mod(int *a, int *b)
{
    int i;

    i = *a;       
    *a = i / *b;  
    *b = i % *b; 
}

int main(void)
{
    int a = 22;  
    int b = 4;    
    printf("Before a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b); 

    printf("After a = %d, b = %d\n", a, b);

    return 0;
}
