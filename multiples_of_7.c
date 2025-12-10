#include <stdio.h>

int main()
{
    int count, counter, product;

    printf("How many multiples of 7 you want to print? ");
    scanf("%i", &count);
    printf("The first %i multiples of 7 are ", count);
    product = 0;
    for (counter = 1; counter < count; counter = counter + 1)
    {
        product = 7 * counter;
        printf("%i, ", product);
    }
    product = 7 * counter;
    printf("%i.\n", product);

    return 0;
}
