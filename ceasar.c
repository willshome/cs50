#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]))
        {
            if (i == strlen(argv[1])-1)
            {
                printf("Success\n%s\n", argv[1]);
            }
        }
        else
        {
            printf("Usage: ./ceasar key\n");
            return 1;
        }
    }

    int x = atoi(argv[1]);
}
