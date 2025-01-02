#include <unistd.h>
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t i;

    i = 0;
    if (!dest || !src)
        return (0);
    if (n > 0)
    {
        while (i < n - 1 && src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (src[i])
        i++;
    return (i);
}

int main()
{
    char dest[10];
    const char *src = "Hello, World!";
    
    size_t len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Destino: %s\n", dest);
    printf("Longitud fuente: %zu\n", len);
    return 0;
}