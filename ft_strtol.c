#include "libft.h"

// Función para convertir un carácter a su valor numérico
int charToValue(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    else if (c >= 'A' && c <= 'Z')
        return 10 + (c - 'A');
    else if (c >= 'a' && c <= 'z')
        return 10 + (c - 'a');
    return (-1); // Carácter no válido
}

// Implementación simplificada de strtol
long int ft_strtol(const char *str, char **endptr, int base) {
    const char *ptr = str;
    long int result = 0;
    int sign = 1;
    // Ignorar espacios en blanco al inicio
    while (isspace(*ptr)) {
        ptr++;
    }
    // Manejar el signo
    if (*ptr == '+')
        ptr++;
    else if (*ptr == '-')
    {
        sign = -1;
        ptr++;
    }
    // Verificar la base
    if (base == 0) {
        if (*ptr == '0')
        {
            if (*(ptr + 1) == 'x' || *(ptr + 1) == 'X')
            {
                base = 16;
                ptr += 2;
            } 
            else
            {
                base = 8;
                ptr++;
            }
        } 
        else
            base = 10;
    }
    // Convertir la cadena a un número
    while (*ptr != '\0')
    {
        int value = charToValue(*ptr);
        if (value == -1 || value >= base)
            break; // Carácter no válido o fuera de la base
        // Verificar desbordamiento
        if (result > (LONG_MAX - value) / base)
        {
            if (sign == 1)
                return LONG_MAX;
            else
                return LONG_MIN;
        }
        result = result * base + value;
        ptr++;
    }
    // Asignar el puntero al primer carácter no válido
    if (endptr != NULL)
        *endptr = (char *)ptr;
    return result * sign;
}
/*
int main() {
    const char *str = "-21474836498";
    char *endptr;
    long int value;

    value = ft_strtol(str, &endptr, 10);

    if (endptr == str) {
        printf("No se pudo realizar la conversión.\n");
 //   } else if (*endptr != '\0') {
   //     printf("Conversión incompleta. Cadena restante: %s\n", endptr);
    } else {
        printf("Conversión exitosa. Valor: %ld\n", value);
    }

    return 0;
}*/