#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // initialize variables
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;
    int coins = 0;
    float input;

    // getting user's input
    do
    {
        input = get_float("Change owed:\n");
    }
    while (input < 0);

    // round change
    int change = round(input * 100);

    // subtract quarters from change
    while (change >= quarters)
    {
        change = change - quarters;
        coins++;
    }

    // subtract dimes from change
    while (change >= dimes)
    {
        change = change - dimes;
        coins++;
    }

    // subtract nickels from change
    while (change >= nickels)
    {
        change = change - nickels;
        coins++;
    }

    // subtract penny from change
    while (change >= pennies)
    {
        change = change - pennies;
        coins++;
    }

    printf("%i\n", coins);
}