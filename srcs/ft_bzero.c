#include <stddef.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    if (s == NULL)
        return;
    while (i < n)
    {
        ((unsigned char*)s)[i] = 0;
        i++;
    }
}

int main(void)
{
    char ptr[] = "Hello World";
    int i;

    ft_bzero(ptr, 4);
    i = 4;
    while (ptr[i] != '\0')
    {
        printf("%c", ptr[i]);
        i++;
    }
    return (0);
}