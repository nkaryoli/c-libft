#include <stddef.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    ((unsigned char *)dest)[n] = '\0';
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