#include "libft.h"

size_t count_substrings(const char *s, char c)
{
    size_t count = 0;
    while (*s)
    {
        while (*s == c) // Salta los delimitadores
            s++;
        if (*s) // Si hay algo distinto a un delimitador
        {
            count++;
            while (*s && *s != c) // Salta la subcadena
                s++;
        }
    }
    return count;
}

char **ft_split(char const *s, char c)
{
    char **result;
    const char *start;
    size_t i = 0;
    size_t substr_count;

    if (!s)
        return NULL;
    
    substr_count = count_substrings(s, c);
    result = (char **)malloc((substr_count + 1) * sizeof(char *));
    if (!result)
        return NULL;

    while (*s)
    {
        while (*s == c) // Salta los delimitadores
            s++;
        start = s; //guarda la posicion del puntero donde empieza la subcadena
        while (*s && *s != c) // Encuentra el final de la subcadena
            s++;
        if (s > start) // Si hay algo que copiar es decir la posicion del puntero ha cambiado
        {
            result[i] = (char *)malloc((s - start + 1) * sizeof(char)); // Asigna memoria para almacenar la subcadena encontrada
            if (!result[i])
                return NULL;
            size_t j = 0;
            while (start < s)
                result[i][j++] = *start++;
            result[i][j] = '\0'; // Añadir el terminador nulo
            i++;
        }
    }
    result[i] = NULL; // Termina el array con un puntero NULL
    return result;
}
void print_split_result(char **result)
{
    int i = 0;

    if (!result)
    {
        printf("Error: ft_split returned NULL.\n");
        return;
    }

    while (result[i])
    {
        printf("Substring %i: '%s'\n", i, result[i]);
        free(result[i]); // Liberar cada subcadena
        i++;
    }
    free(result); // Liberar el array principal
    printf("\n");
}

int main(void)
{
    char str1[] = "Hello world 42 Barcelona"; // Caso básico
    char delimiter1 = ' ';
    char str2[] = ",,,Hello,,world,,,42,,,"; // Caso con delimitadores consecutivos
    char delimiter2 = ',';
    char str3[] = ""; // Cadena vacía
    char delimiter3 = ' ';
    char str4[] = "42"; // Sin delimitadores
    char delimiter4 = ' ';
    char str5[] = "....42...."; // Delimitadores al inicio y al final
    char delimiter5 = '.';

    printf("Case 1: Splitting '%s' with delimiter '%c':\n", str1, delimiter1);
    char **result1 = ft_split(str1, delimiter1);
    print_split_result(result1);

    printf("Case 2: Splitting '%s' with delimiter '%c':\n", str2, delimiter2);
    char **result2 = ft_split(str2, delimiter2);
    print_split_result(result2);

    printf("Case 3: Splitting an empty string '%s' with delimiter '%c':\n", str3, delimiter3);
    char **result3 = ft_split(str3, delimiter3);
    print_split_result(result3);

    printf("Case 4: Splitting '%s' with delimiter '%c':\n", str4, delimiter4);
    char **result4 = ft_split(str4, delimiter4);
    print_split_result(result4);

    printf("Case 5: Splitting '%s' with delimiter '%c':\n", str5, delimiter5);
    char **result5 = ft_split(str5, delimiter5);
    print_split_result(result5);

    return 0;
}