#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *c_dest;
    unsigned char *c_src;

    i = -1;
    c_dest = (unsigned char *)dest;
    c_src = (unsigned char *)src;
    if (!dest || !src)
        return (0);
    if (dest > src) // Si el destino es mayor que el origen (solapamiento hacia atrás)
    {
        while (n-- > 0) // Copia desde el final hacia el principio
            c_dest[n] = c_src[n];
    }
    else // Copia en orden ascendente si no hay solapamiento o si dest es menor que src
    {
        while (i++ < n) // Copia desde el principio hacia el final
            c_dest[i] = c_src[i];
    }
    return (dest);
}

// int main(void)
// {
//     char arr[] = "Hello, World";
//     char arr1[] = "Hello, World";

//     ft_memmove(arr + 6, arr, 5);
//     printf("ft_memmove: %s\n", arr);
//     ft_memmove(arr1 + 6 , arr1, 5);
//     printf("memmove: %s\n", arr1);
//     return (0);
// }