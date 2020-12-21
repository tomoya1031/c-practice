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
    char **numbers_converted;
    char file[] = "0: zero\n1: one\n2: two\n3: three\n4: four\n5: five\n6: six\n7: seven\n8: eight\n9: nine\n10: ten\n11: eleven\n12: twelve\n13: thirteen\n14: fourteen\n15: fifteen\n16: sixteen\n17: seventeen\n18: eighteen\n19: nineteen\n20: twenty\n30: thirty\n40: forty\n50: fifty\n60: sixty\n70: seventy\n80: eighty\n90: ninety\n100: hundred\n1000: thousand\n1000000: million\n1000000000: billion\n1000000000000: trillion\n1000000000000000: quadrillion\n1000000000000000000: quintillion\n1000000000000000000000: sextillion\n1000000000000000000000000: septillion\n1000000000000000000000000000: octillion\n1000000000000000000000000000000: nonillion\n1000000000000000000000000000000000: decillion\n1000000000000000000000000000000000000: undecillion";

    numbers = str_to_numbers("12345");
    numbers_converted = convert_numbers_to_word(numbers, file);
    if (numbers_converted == 0)
    {
        printf("%s\n", "not found");
    }
    else
    {
        print_nums(numbers_converted);
    }

    return 0;
}
