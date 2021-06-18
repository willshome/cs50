#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int start, end, x, llamas, current, years = 0;

    do  //user input for current population
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    do  //user input for maximum population
    {
        end = get_int("End size: ");
    }
    while (end < start);

    current = start;

    //annual change and years accumulator
    for (x = current; x < end; x += llamas)
    {
        llamas = (current / 3) - (current / 4);
        current = current + llamas;
        years++;
    }

    printf("Years: %d\n", years);
}
