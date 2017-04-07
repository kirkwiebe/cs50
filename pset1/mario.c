#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Height: ");
        n = get_int();
    }
    while (n < 0 || n > 23);

    for(int i = 1; i < n + 1; i++)
    {
        for(int s = 0; s < n-i; s++)
        {
            printf("%s", " ");
        }

        for(int h = 0; h < i; h++)
        {
            printf("#");
        }
        printf("%s", "  ");
        for(int k = 0; k < i; k++)
        {
            printf("#");
        }

        printf("\n");

    }
    return 0;
}