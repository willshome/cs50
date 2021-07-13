#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2) // confirm only one argument after ./substitution vector
    {
        printf("Usage: ./substitution key\n"); // usage help
        return 1;
    }

    if (strlen(argv[1]) < 26 || strlen(argv[1]) > 26) // confirm second vector contains 26 characters
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    int count = 0;

    for (int i = 0, n = strlen(argv[1]); i < n; i++) // confirm no duplicated characters
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (tolower(argv[1][i]) == tolower(argv[1][j]))
            {
                count++;
                argv[1][j] = 0;
            }

            if (count > 1)
            {
                printf("Key must not contain duplicated characters\n");
                return 1;
            }
        }
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++) // confirm only alphabetic characters
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key must only contain alphabetic characters\n");
            return 1;
        }
    } 
}
