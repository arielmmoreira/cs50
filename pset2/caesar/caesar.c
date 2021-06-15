#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                char current = (((plaintext[i] + key) % 65) % 26) + 65;
                printf("%c", current);
            }
            else
            {
                char current = (((plaintext[i] + key) % 97) % 26) + 97;
                printf("%c", current);
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");



}
