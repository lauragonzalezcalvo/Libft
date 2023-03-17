
#include "libft.h"

int ft_toupper(int c)
{
    if (c >=  97 && c <= 122)
        c = c - 32;
    return (c);
}
/*
int main(void)
{
    printf("%d\n", toupper('A'));
    printf("%d\n", ft_toupper('A'));
}*/