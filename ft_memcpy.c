#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *c_dest;
    unsigned char *c_src;
    
    i = 0;
    c_dest = (unsigned char *)dest;
    c_src = (unsigned char *)src;
    while (i < n)
    {
        c_dest[i] = c_src[i];
        i++;
    }
    c_dest[n] = '\0';
    return (dest);
}

int main(void)
{
    char src[] = "Hello World";
    char dest[50];

    ft_memcpy(dest, src, 7);
    printf("Destino: %s\n", dest);
    return (0);
}