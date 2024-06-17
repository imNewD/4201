#include <stdio.h>
#include <unistd.h> 

void ft_putstr(char *str)
{
     int s = 0;

     while (str[s] != '\0')
    {
        s++;
    }

    
    write(1, str, s);
}

int main(void)
{
    char str[] = "COCA COLA > PEPSI"; 
    ft_putstr(str); 
    return 0;
}
