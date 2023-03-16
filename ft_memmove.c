//FALTA HEADER

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    // La función memmove copia los primeros n bytes del bloque de memoria de origen apuntado por src al bloque de memoria de destino apuntado por dest. La función devuelve un puntero al bloque de memoria de destino.

    const char *origin;
    char *dst;
    size_t   i;

    i = 0;
    origin = src;
    dst = dest;

    while( i < n)
    {
        dst[i] = origin[i];
        i++;
    }
    return (void *)dst;
}

int main(void)
{
    char a[7] = "abcdefg";
    char b[6] = "abcdef";

    printf("%p\n",  memmove( b, a, 5 ));
    printf("%p\n",  ft_memmove( b, a, 5 ));
}

