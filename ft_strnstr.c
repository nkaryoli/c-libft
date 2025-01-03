#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    const char *h;
    const char *n;
    size_t remaining;

    if (*needle == '\0')  // Si needle es una cadena vacía, devolvemos haystack
        return (char *)haystack;
    while (*haystack && len > 0)
    {
        h = haystack;
        n = needle;
        remaining = len;
        while (*h && *n && *h == *n && remaining--) // Comparamos la subcadena desde la primera coincidencia
        {
            h++;
            n++;
        }
        if (*n == '\0') // Si hemos llegado al final de needle, significa que hemos encontrado la subcadena
            return ((char *)haystack);
        haystack++; // Avanzamos al siguiente carácter en haystack
        len--; // Reducimos el número de caracteres restantes a considerar
    }
    return (0);
}

// int main(void)
// {
//     const char *haystack = "Hola Mundo, mundo!";
//     const char *needle = "Mundo";
//     char *result;

//     result = ft_strnstr(haystack, needle, 19);  // Buscamos "mundo" en los primeros 15 caracteres de haystack
//     if (result != NULL) {
//         printf("Subcadena encontrada en la posicion: %i\n", result - haystack);
//     } else {
//         printf("Subcadena no encontrada.\n");
//     }
//     return (0);
// }