#include <stdio.h>

// Function definition
void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a  % b;
}

int main(void)
{
    int a = 1;   // Define an integer named a and initialize it with 23
    int b = 0;    // Define an integer named b and initialize it with 5
    int div, mod; // Define integers named div and mod to store the division and modulus results

    // Call ft_div_mod, passing the values of a, b, and addresses of div and mod
    ft_div_mod(a, b, &div, &mod);

    printf("Dividend: %d\n", a);
    printf("Divisor: %d\n", b);
    printf("Division Result (a / b): %d\n", div);
    printf("Modulus Result (a %% b): %d\n", mod);

    return 0;
}
