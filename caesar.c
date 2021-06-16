#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2) // confirm only one argument after ./ceasar vector
    {
        printf("Usage: ./ceasar key\n"); // usage help
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i])) // confirm only digit in second vector
        {
            printf("Usage: ./ceasar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);  // key for ciphertext

    string plain = get_string("plaintext: "); // user text input

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        if (isupper(plain[i])) // uppercase characters
        {
            int c = ((plain[i] - 65) + key) % 26; // convert alphabetic index & use of formula
            printf("%c", c + 65); // convert result back to ascii - ('A' = 65)
        }
        else if (islower(plain[i])) //lowercase characters
        {
            int c = ((plain[i] - 97) + key) % 26;
            printf("%c", c + 97); // ('a' = 97)
        }
        else
        {
            printf("%c", plain[i]); // non-alphabetic characters
        }
    }
    printf("\n");
}
