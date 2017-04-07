#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float n;
    do
    {
        printf("O hai! How much change is owed?\n");
        n = get_float();
    }
    while(n < 0);
    
    n *= 100;
    
    n = round(n);
    
    int c = 0;
    
    while(n >= 25)
    {
        c += 1;
        n -= 25;
    }

    while(n >= 10)
    {
        c += 1;
        n -= 10;
    }
    while(n >= 5)
    {
        c += 1;
        n -= 5;
    }
    while(n >= 1)
    {
        c += 1;
        n -= 1;
    }
    printf("%i\n", c);
}