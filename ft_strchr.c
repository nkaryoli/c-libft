#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == (char)c)
            return ((char *)str);
        str++;
    }
    if (c == '\0')
        return ((char *)str);
    return (0);
}

// int main(void)
// {
//     const char *cadena = "Hola, mundo!";
//     char caracter = 'm';

//     char *resultado = ft_strchr(cadena, caracter);
//     if (resultado != NULL) {
//         printf("El caracter '%c' se encontro en la posicion: %i\n", caracter, resultado - cadena);
//     } else {
//         printf("El caracter '%c' no se encontro en la cadena.\n", caracter);
//     }
//     return (0);
// }