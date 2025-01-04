#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *result;
    size_t start;
    size_t end;
    size_t len;

    start = 0;
    end = ft_strlen(s1) - 1;
    if (!s1 || !set)
        return (NULL);
    while (s1[start] && ft_strchr(set, s1[start]))  // Calcular el inicio de la subcadena que no tiene caracteres de set
        start++;
    while (s1[end] && ft_strchr(set, s1[end]))  // Calcular el final de la subcadena que no tiene caracteres de set
        end--;
    len = end - start + 1; // longitud de la nueva cadena
    result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return (NULL);
    ft_strlcpy(result, s1 + start, len + 1);
    return (result);
}

// int main(void)
// {
//     char s1[] = " ***Hello, world!*** ";
//     char set[] = " *";
//     char *result;

//     result = ft_strtrim(s1, set);
//     printf("%s\n", result);
//     free(result);
//     return (0);
// }