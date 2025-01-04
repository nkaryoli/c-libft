#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    void *ptr;
    size_t total_size;

    if (num == 0 || size == 0)
    {
        ptr = malloc(1);
        if (!ptr)
            return (0);
        return (ptr);
    }
    total_size = num * size;
    if (num != 0 && (total_size / num) != size)
        return (0);
    ptr = (void *)malloc(total_size);
    if (!ptr)
        return (0);
    ft_bzero(ptr, total_size);
    return (ptr);
}