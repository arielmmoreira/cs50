#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // make sure there are 2 command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // make sure the key has 26 characters.
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("Error 1\n");
            return 1;
        }

        for (int j = i + 1; j <= 26; j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("Error 2\n");
                return 1;
            }
        }

    }

    string plaintext = get_string("plaintext: ");
    string key = argv[1];

    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        int position;
        if (isalpha(plaintext[i]))
        {
            if (isupper(plaintext[i]))
            {
                position = plaintext[i] % 65;
                printf("%c", toupper(key[position]));
            }
            else
            {
                position = plaintext[i] % 97;
                printf("%c", tolower(key[position]));
            }
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");

}