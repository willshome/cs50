#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int letters(string sentence);
int words(string sentence);
int sentences(string sentence);
float coleman_liau(float total_letters, float total_words, float total_sentences);

int main(void)
{

    string text = get_string("Text: "); // User text input

    float total_letters = letters(text),
          total_words = words(text),
          total_sentences = sentences(text);

    float grade = coleman_liau(total_letters, total_words, total_sentences);

    if (grade < 1) // Final grade
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.f\n", round(grade));
    }

}

int letters(string sentence) // Letter count
{
    int char_count = 0;

    for (int i = 0, n = strlen(sentence); i < n; i++)
    {
        if (isalpha(sentence[i]))
        {
            char_count++;
        }
    }

    return char_count;
}

int words(string sentence) // Word count
{
    int space_count = 1; // Starts at one as no space after last word in sentence

    for (int i = 0, n = strlen(sentence); i < n; i++)
    {
        if (isspace(sentence[i])) // Requirement for completion of word
        {
            space_count++;
        }
    }

    return space_count;
}

int sentences(string sentence) // Sentence count
{
    int sent_count = 0;

    for (int i = 0, n = strlen(sentence); i < n; i++)
    {
        if ((sentence[i] == '.') || (sentence[i] == '!') || (sentence[i] == '?')) // ASCII characters signifying sentence complete
        {
            sent_count++;
        }
    }

    return sent_count;
}

float coleman_liau(float total_letters, float total_words, float total_sentences) // Maths for grade
{
    float L = (total_letters / total_words) * 100,
          S = (total_sentences / total_words) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8; // Coleman-Liau Index

    return index;
}
