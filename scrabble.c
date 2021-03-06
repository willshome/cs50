// DESIRED OUTPUT BUT LOOPS 26x ('a'-'z') IN compute_value() FUNCTION
// UNLIKE OFFICIAL GIVEN SOLUTION WHICH MERELY LOOPS LENGTH OF STRING

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

    int sum = 0, value, b = 0;

    for (int a = 'a'; a <= 'z'; a++, b++) // Loop using ASCII
    {
        for (int n = 0, y = strlen(word); n < y; n++) //Nested loop through string
        {
            word[n] = tolower(word[n]); // If characters upper, makes lower

            if (word[n] == a) // Conditional to assign value to each character
            {
                value = POINTS[b];
            }
            else
            {
                value = 0; // 0 point value for no letters 'a'-'z'
            }

            sum += value; // Sum of character values
        }
    }
    return sum;
}

/* // Official cs50 solution //

int compute_value(string word)
{
    int score = 0; // Keep track of score
    
    for (int i = 0, len = strlen(word); i < len; i++) // Keep track of score
    {
        if (isupper(word[i]))
        {
            score +=POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    
    return score;
}

*/
