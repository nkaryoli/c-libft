#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char*)s1;
    ptr2 = (unsigned char *)s2;
    while (n > 0)
    {
        if (*ptr1 != *ptr2)
            return (ptr1 -ptr2);
        ptr1++;
        ptr2++;
        n--;
    }
    return (0);
}

// int main(void)
// {
//     char str1[] = "Hola Mundo!";
//     char str2[] = "Hola Mundo!";
//     char str3[] = "Hola Mundo?";
//     char str4[] = "Hola";

//     printf("Resultado de ft_memcmp(str1, str2, 12): %d\n", ft_memcmp(str1, str2, 12));  // Debería ser 0 (iguales)
//     printf("Resultado de ft_memcmp(str1, str3, 12): %d\n", ft_memcmp(str1, str3, 12));  // Debería ser negativo (diferencia en el ?)
//     printf("Resultado de ft_memcmp(str1, str4, 4): %d\n", ft_memcmp(str1, str4, 4));    // Debería ser 0 (iguales en los primeros 4 caracteres)
//     printf("Resultado de ft_memcmp(str1, str3, 5): %d\n", ft_memcmp(str1, str3, 5));    // Debería ser 0 (iguales en los primeros 5 caracteres)
//     return (0);
// }