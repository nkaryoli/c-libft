#include "libft.h"
//#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    int len;

    len = ft_strlen(str);
    while (len >= 0)
    {
        if (str[len] == (char)c)
            return ((char *)(str + len));
        len--;
    }
    return (0);
}

// int main(void)
// {
//     const char *cadena = "Hola hola, mundo!";
//     char caracter = 'l';

//     char *resultado = strrchr(cadena, caracter);

//     if (resultado != NULL) {
//         printf("El carácter '%c' se encontró en la posición: %i\n", caracter, resultado - cadena);
//     } else {
//         printf("El carácter '%c' no se encontró en la cadena.\n", caracter);
//     }
//     return (0);
// }