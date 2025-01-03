#include "libft.h"
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
        n--;
	}
    if (n == 0)
    {
        return (0);
    }
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

#include <stdio.h>
#include <string.h>  // Para usar strcmp y comparar resultados
#include "libft.h"   // Incluye tu propia implementación de strncmp

// int main(void) 
// {
//     const char *str1 = "Hola Mundo!";
//     const char *str2 = "Hola Mundo!";
//     const char *str3 = "Hola Mundo?";
//     const char *str4 = "Hola";
//     const char *str5 = "Hola Mundo";
    
//     int n;

//     // Comparación de las primeras 12 posiciones
//     n = 12;
//     printf("Probando con n = %i\n", n);
//     printf("Resultado de ft_strncmp(str1, str2, %i): %d\n", n, ft_strncmp(str1, str2, n));  // Debería ser 0 (iguales)
//     printf("Resultado de strncmp(str1, str2, %i): %d\n\n", n, strncmp(str1, str2, n));      // Debería ser 0 (iguales)

//     // Comparación con una diferencia
//     n = 12;
//     printf("Probando con n = %i\n", n);
//     printf("Resultado de ft_strncmp(str1, str3, %i): %d\n", n, ft_strncmp(str1, str3, n));  // Debería ser negativo (diferencia en el ?)
//     printf("Resultado de strncmp(str1, str3, %i): %d\n\n", n, strncmp(str1, str3, n));      // Debería ser negativo (diferencia en el ?)

//     // Comparación con diferentes longitudes
//     n = 4;
//     printf("Probando con n = %i\n", n);
//     printf("Resultado de ft_strncmp(str1, str4, %i): %d\n", n, ft_strncmp(str1, str4, n));  // Debería ser 0 (iguales en los primeros 4 caracteres)
//     printf("Resultado de strncmp(str1, str4, %i): %d\n\n", n, strncmp(str1, str4, n));      // Debería ser 0 (iguales en los primeros 4 caracteres)

//     // Comparación de cadenas con diferentes tamaños
//     n = 12;
//     printf("Probando con n = %i\n", n);
//     printf("Resultado de ft_strncmp(str1, str5, %i): %d\n", n, ft_strncmp(str1, str5, n));  // Debería ser 0 (iguales en los primeros 5 car
//     printf("Resultado de strncmp(str1, str5, %i): %d\n\n", n, strncmp(str1, str5, n));      // Debería ser 0 (iguales en los primeros 5 caracteres)
//     return 0;
// }