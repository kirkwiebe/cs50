#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //check for proper number of arguments
    if (argc != 2)
    {
        printf("Please enter only 1 word. Exiting program.\n");
        return 1;
    }
    //convert user input from a string to an interger
    int k = atoi(argv[1]);
    //prompt for plaintext
    printf("plaintext: ");
    string plain = get_string();
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plain); i++)
    {
        if (isalpha(plain[i]))
        {
            if (isupper(plain[i]))
            {
                //find the alphabet index of the character
                int alphindex = ((plain[i] - 65) + k) % 26;
                //set the ciphertext character
                char c = (65 + alphindex);
                printf("%c", c);
            }
            else
            {
                //find the alphabet index of the character
                int alphindex = ((plain[i] - 97) + k) % 26;
                //set the ciphertext character
                char c = (97 + alphindex);
                printf("%c", c);
            }
        }
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}