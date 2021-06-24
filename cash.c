#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float cents;
    int change, q = 25, d = 10, n = 5, p = 1, coins = 0;


    {
    do

        cents = get_float("Change owed: ");

    while (cents < 0);
    }

    change = round(cents * 100);

    while (change >= q)
    {
        change = change - q;
        coins++;
    }

    while (change >= d)
    {
        change = change - d;
        coins++;
    }

    while (change >= n)
    {
        change = change - n;
        coins++;
    }

    while (change >= p)
    {
        change = change - p;
        coins++;
    }

    printf("%d\n", coins);
}
