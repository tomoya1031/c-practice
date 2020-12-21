#include <stdio.h>
#include <stdlib.h>
#include "../ex00/ft.h"

void print_nums(char **numbers)
{
    int i;
    i = 0;
    while (numbers[i] != 0)
    {
        printf("%s ", numbers[i]);
        i++;
    }
}
int main()
{
    char **numbers;
    char *str;

    str = "0";
    numbers = str_to_numbers(str);
    print_nums(numbers);
    printf("\n---------------\n");

    str = "2";
    numbers = str_to_numbers(str);
    print_nums(numbers);
    printf("\n---------------\n");

    str = "12";
    numbers = str_to_numbers(str);
    print_nums(numbers);
    printf("\n---------------\n");

    str = "12345";
    numbers = str_to_numbers(str);
    print_nums(numbers);
    printf("\n---------------\n");

    str = "123456123456";
    numbers = str_to_numbers(str);
    print_nums(numbers);

    return 0;
}
