#include <stdio.h>
int main()
{ 

    int count, counter;
 
    printf("Which multiplication table you want to print? ");
    scanf("%i", &count);
    printf("The multiplication table of %i is: \n", count);
    for (counter = 1; counter <= 10; counter = counter + 1)
    {
        printf("%2i x %2i = %3i\n", count, counter, counter * count);
    }
}
