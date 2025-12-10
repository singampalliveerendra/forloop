#include <stdio.h>
int main()
{
    int count, counter, square;

    printf("Up to which number you want to print the square series? ");
    scanf("%i", &count);
    printf("The square series up to %i is ", count);
    square = 1;
    printf("%i", square);
    for (counter = 2; counter * counter <= count; counter = counter + 1)
    {
        square = counter * counter;
        printf(", %i", square);
    }	
    printf(".\n");	

    return 0;
}
