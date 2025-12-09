#include <stdio.h>
int main()
{
    int count, counter;
    printf("Up to which number you want to print odd numbers? ");
    scanf("%i", &count);
    printf("The odd numbers up to %i are 1", count);
    for (counter = 3; counter < count + 1; counter = counter + 2)
    {
        printf(", %i", counter);
    }
    printf(".\n");
    return 0;
}
