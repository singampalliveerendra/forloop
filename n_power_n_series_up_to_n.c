int main()
{
    int count, counterterm, counter, product;

    printf("Up to which number you want to print the N power N series? ");
    scanf("%i", &count);
    product = 1;
    printf("The N power N series up to %i is %i", count, product);
    for (counterterm = 2; product <= count;)
    {
        product = 1;
        for (counter = 0; counter < counterterm; counter = counter + 1)
        {
            product = product * counterterm;
        }
        if (product <= count)
        {
            printf(", %i", product);
            counterterm = counterterm + 1;
        }
    }
    printf(".\n");

    return 0;
}
