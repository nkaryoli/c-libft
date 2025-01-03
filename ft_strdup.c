#include "libft.h"

char *ft_strdup(char *src)
{
    int len;
    char *copy;
    int i;

    i = 0;
    len = ft_strlen(src);
    copy = (char *)malloc((len + 1) * sizeof(char)); // Asignar memoria para la nueva cadena (+1 para el carácter null terminator)
    if (!copy)
        return (NULL);
    while (src[i] != '\0')
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}