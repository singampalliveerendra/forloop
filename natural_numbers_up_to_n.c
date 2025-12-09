#include <stdio.h>
int main()
{
   
    int natural_number, counter;
    printf("Up to which number you want to print natural numbers? ");
    scanf("%i", &natural_number);
    printf("The first %i natural numbers are ", natural_number);
    for (counter = 1; counter < natural_number; counter = counter + 1)
    {
        printf("%i, ", counter);
    }
    printf("%i.\n", counter);
    return 0;
}
