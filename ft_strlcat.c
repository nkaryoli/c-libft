#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = ft_strlen(dest);
    j = ft_strlen(src);
    if (size < i)
        return (size + j);
    else
    {
        ft_strlcpy(&dest[i], src, size - i);
        return (i + j);
    }
}

int main(void)
{
    char dest[20] = "Hello, ";
    const char *src = "World!";

    int len = ft_strlcat(dest, src, sizeof(dest));

    printf("Resultado: %s\n", dest);  // Esperado: "Hello, World!"
    printf("Longitud total: %i\n", len);  // Longitud total esperada: 13

    return 0;
}