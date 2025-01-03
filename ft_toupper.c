#include "libft.h"
//#include <ctype.h>

#include <ctype.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        c -= 32;
        return (c);
    }
    return (c);
}

// int main(void) {
//     char letra = 'a';
//     char resultado = toupper(letra);
//     char resultado1 = ft_toupper(letra);
    
//     printf("Letra original: %c\n", letra);
//     printf("Letra toupper: %c\n", resultado);
//     printf("Letra ft_toupper: %c\n", resultado1);
//     // Caso no modificado
//     char simbolo = '!';
//     printf("Carácter original: %c -> %c\n", simbolo, toupper(simbolo));
//     printf("Carácter original ft_toupper: %c -> %c\n", simbolo, ft_toupper(simbolo));
//     return (0);
// }