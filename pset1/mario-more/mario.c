#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // initialize variable
    int height;

    // ask for user input until it satisfy the conditions
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);


    // loop height times
    for (int i = 0; i < height; i++)
    {
        // add spaces
        for (int j = height; j > i + 1; j--)
        {
            printf(" ");
        }

        // add #
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("  ");

        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}