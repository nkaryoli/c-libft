#include "libft.h"
//#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;
    unsigned char value;

    ptr = (unsigned char*)s;
    value = (unsigned char)c;
    while (n > 0)
    {
        if (*ptr == value)
            return ((void *)ptr);
        ptr++;
        n--;
    }
    return (0);
}

// int main(void)
// {
//     char str[] = "Hola Mundo!";
//     char *result;
//     char *result1;

//     result = ft_memchr(str, 'M', 12);  // Buscamos el carácter 'M' en los primeros 12 bytes de str
//     result1 = memchr(str, 'M', 12);
//     if (result && result1) {
//         printf("posicion ft_memchr: %i\n", result - str);
//         printf("posicion memchr: %i\n", result1 - str);

//     } else {
//         printf("El carácter no se encontró.\n");
//     }
//     return (0);
// }