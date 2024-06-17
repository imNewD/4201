#include <stdio.h>  


int ft_strlen(char *str)
{
    unsigned int i = 0;

     while (str[i] != '\0')
    {
        i++;
    }

    return (i);
}

int main(void)
{
    char str[] = "this is 10"; 
    int length = ft_strlen(str);

    
    printf(" '%s' is: %d\n", str, length);

    return 0;
}
