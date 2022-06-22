#include "main.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i],1);
		i++;
	}
}

int     ft_close(void)
{
        ft_putstr("\033[31mClose\n");
        exit(0);
}
