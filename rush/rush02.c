#include <unistd.h>

void    ft_putchar(char c);

void    linhas(int x, char fora, char dentro, char canto)
{
    int     i;

    i = 1;
    while (i <= x)
    {

        if (i == 1)
            ft_putchar(fora);
        else if (i == x)
        {
            ft_putchar(canto);
        }
        else
            ft_putchar(dentro);
        i++;
    }
}
void    rush(int x, int y)
{
    int i;

    if (x <= 0 || y <= 0)
    {
        write(1, "insert positive number\n", 24);
        return;
    }
    i = 1;
    while (i <= y)
    {
        if (i == 1)
        {
            linhas(x, 'A', 'B', 'A');
        }
        else if (i == y)
        {
            linhas(x, 'C', 'B', 'C');
        }
        else
        {
            linhas(x, 'B', ' ', 'B');
        }
        ft_putchar('\n');
        i++;
    }
}
