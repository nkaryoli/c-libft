#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *strjoin;

    if (!s1 || !s2)
        return (NULL);
    strjoin = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!strjoin)
        return (NULL);
    ft_strlcpy(&strjoin[0], s1, ft_strlen(s1) + 1);
    ft_strlcpy(&strjoin[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
    return (strjoin);
}

// int main(void)
// {
//     char s1[] = "Hello, ";
//     char s2[] = "world";
//     char *result;

//     result = ft_strjoin(s1, s2);
//     printf("%s\n", result);
//     free(result);
//     return (0);
// }