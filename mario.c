#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, j, n, a, q;

    do
    {
        height = get_int("Height: "); //user input acquiring height
    }
    while (height < 1 || height > 8); //certifying height between one and eight

    for (n = 0; n < height; n++)
    {
        for(a = height; a > n+1; a--) //air infront of steps up
        {
            printf(" ");
        }

        for (q = 0; q < a; q++) //steps up
        {
            printf("#");
        }

        printf("  "); //gap between steps up and steps down

        for(j = 0; j < q; j++) //steps down
        {
            printf("#");
        }

        printf("\n");
    }

}
