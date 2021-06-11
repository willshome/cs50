// THE computer_value() FUNCTION PRODUCES DESIRED OUTPUT BUT
// DOESN'T LOOP THROUGH ASCII/POINTS[] CONDITIONAL, TOO MUCH COPY/PASTE

#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_value(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // score both words
    int score1 = compute_value(word1);
    int score2 = compute_value(word2);

    // Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

}

int compute_value(string word)
{
    // Compute and return value for string
    int sum = 0, value = 0;

    for (int n = 0, y = strlen(word); n < y; n++)
    {
        word[n] = tolower(word[n]); // If any characters upper, all become lower

        if (word[n] == 'a') //Condition to assign value to characters
        {
            value = POINTS[0];
        }
        else if (word[n] == 'b')
        {
            value = POINTS[1];
        }
        else if (word[n] == 'c')
        {
            value = POINTS[2];
        }
        else if (word[n] == 'd')
        {
            value = POINTS[3];
        }
        else if (word[n] == 'e')
        {
            value = POINTS[4];
        }
        else if (word[n] == 'f')
        {
            value = POINTS[5];
        }
        else if (word[n] == 'g')
        {
            value = POINTS[6];
        }
        else if (word[n] == 'h')
        {
            value = POINTS[7];
        }
        else if (word[n] == 'i')
        {
            value = POINTS[8];
        }
        else if (word[n] == 'j')
        {
            value = POINTS[9];
        }
        else if (word[n] == 'k')
        {
            value = POINTS[10];
        }
        else if (word[n] == 'l')
        {
            value = POINTS[11];
        }
        else if (word[n] == 'm')
        {
            value = POINTS[12];
        }
        else if (word[n] == 'n')
        {
            value = POINTS[13];
        }
        else if (word[n] == 'o')
        {
            value = POINTS[14];
        }
        else if (word[n] == 'p')
        {
            value = POINTS[15];
        }
        else if (word[n] == 'q')
        {
            value = POINTS[16];
        }
        else if (word[n] == 'r')
        {
            value = POINTS[17];
        }
        else if (word[n] == 's')
        {
            value = POINTS[18];
        }
        else if (word[n] == 't')
        {
            value = POINTS[19];
        }
        else if (word[n] == 'u')
        {
            value = POINTS[20];
        }
        else if (word[n] == 'v')
        {
            value = POINTS[21];
        }
        else if (word[n] == 'w')
        {
            value = POINTS[22];
        }
        else if (word[n] == 'x')
        {
            value = POINTS[23];
        }
        else if (word[n] == 'y')
        {
            value = POINTS[24];
        }
        else if (word[n] == 'z')
        {
            value = POINTS[25];
        }
        else
        {
            value = 0;
        }

        sum += value; // Addition of individual character values

    }

    return sum;
}
