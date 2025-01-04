#include "libft.h"

int ft_atoi(const char *str)
{
    long long result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}

int main(void)
{
    const char *str1 = "   -12345";
    const char *str2 = "42abc";
    const char *str3 = "   +0";
    const char *str4 = "   +2147483647";
    const char *str5 = "99999999999999";
    const char *str6 = "-999999999999";

    printf("atoi de -12345: %d\n", atoi(str1));  // -12345
    printf("ft_atoi de -12345: %d\n", ft_atoi(str1));  // -12345
    printf("atoi de 42abc: %d\n", atoi(str2));  // 42
    printf("atoi de 42abc: %d\n", ft_atoi(str2));  // 42
    printf("atoi de :   +0: %d\n", atoi(str3));  // 0
    printf("atoi de :   +0: %d\n", ft_atoi(str3));  // 0
    printf("atoi de :   +2147483647: %d\n", atoi(str4));  // 2147483647
    printf("ft_atoi de :   +2147483647: %d\n", ft_atoi(str4));  // 2147483647
    printf("atoi de 999999999999: %d\n", atoi(str5));
    printf("ft_atoi de 999999999999: %d\n", ft_atoi(str5));
    printf("atoi de -999999999999: %d\n", atoi(str6));
    printf("ft_atoi de -999999999999: %d\n", ft_atoi(str6));
    return (0);
}