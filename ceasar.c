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
        if (isdigit(!argv[1][i])) // confirm only digit's in second vector
        {
            printf("Usage: ./ceasar key\n"); // usage help
            return 1;
        }
    }

    int key = atoi(argv[1]); // key for ciphertext 
    printf("%i\n", key);
}
