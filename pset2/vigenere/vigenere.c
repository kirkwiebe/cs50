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
        printf("Please enter 1 word. Exiting program.\n");
        return 1;
    }
    //check for alphabetical characters
    string k = argv[1];
    int x = strlen(k);
    for (int j = 0; j < strlen(k); j++)
    {
        if isalpha(k[j])
        {
            continue;
        }
        else
        {
            printf("Please enter 1 word. Exiting program.\n");
            return 1;
        }
    }
    
    //prompt for plaintext
    printf("plaintext: ");
    string plain = get_string();
    
    //print ciphertext
    printf("ciphertext: ");
    for (int i = 0, j = 0; i < strlen(plain); i++)
    {
        if (isalpha(plain[i]))
        {
            if (isupper(plain[i]))
            {
               if isupper(k[j % x])
               {
                    //find the alphabet index of the character
                    int alphindex = ((plain[i] - 65) + (k[j % x] - 65)) % 26;
                    //set the ciphertext character
                    char c = (65 + alphindex);
                    printf("%c", c);
                    j++;
               }
               else
               {
                    //find the alphabet index of the character
                    int alphindex = ((plain[i] - 65) + (k[j % x] - 97)) % 26;
                    //set the ciphertext character
                    char c = (65 + alphindex);
                    printf("%c", c);
                    j++;
               }
            }
            else
            {
                if isupper(k[j % x])
                {
                    //find the alphabet index of the character
                    int alphindex = ((plain[i] - 97) + (k[j % x] - 65)) % 26;
                    //set the ciphertext character
                    char c = (97 + alphindex);
                    printf("%c", c);
                    j++;
                }
                else
                {
                    //find the alphabet index of the character
                    int alphindex = ((plain[i] - 97) + (k[j % x] - 97)) % 26;
                    //set the ciphertext character
                    char c = (97 + alphindex);
                    printf("%c", c);
                    j++;
                }
                
            }
        }
        else
        {
            printf("%c", plain[i]);
        }
    }
    printf("\n");
}


