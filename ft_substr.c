#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;

    if (!s || start > ft_strlen(s))
        return (NULL);
    if ((ft_strlen(s) - start) < len)
        len = ft_strlen(s) - start;
    substr = (char *)malloc((len + 1) * sizeof(char));
    if (!substr)
        return (NULL);
    ft_strlcpy(substr, s + start, len + 1);
    return (substr);
}

// int main(void)
// {
//     const char s[] = "Hello, world";
//     char *sub;

//     sub = ft_substr(s, 9, 7);
//     printf("La subcadena es: %s\n", sub);
//     return (0);
// }