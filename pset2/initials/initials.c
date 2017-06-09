#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string();
    int n = 0;
    while (s[n] != ' ')
    {
        n++;
    }
    printf("%c", s[0]);
    printf("%c\n", s[n+1]);
}
