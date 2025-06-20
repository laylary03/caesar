#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string encryption(string k, string p);
int atoi(string s);

int main(int argc, string argv[])
{
    // Ensures only 2 command-line-arguments are given
    // and that the second argument is a number
    if (argc == 2)
    {
        // Ensures 'key' is a number
        string key = argv[1];
        int not_valid = 0;
        for (int i = 0; i < strlen(key); i++)
        {
            if (!isdigit(key[i]))
            {
                i = strlen(key);
                not_valid = 1;
            }
        }
        if (not_valid == 0)
        {
            // Prompts the user for text needed to be encrypted and returns encrypted text
            string plaintext = get_string("plaintext: ");
            string ciphertext = encryption(key, plaintext);
            printf("ciphertext: %s\n", ciphertext);
            return 0;
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

string encryption(string k, string p)
{
    for (int i = 0; i < strlen(p); i++)
    {
        if (isalpha(p[i]))
        {
            if (isupper(p[i]))
            {
                int x = 26 + p[i] + atoi(k);
                do
                {
                    x = x - 26;
                }
                while (x > 90);
                if (x < 65)
                {
                    p[i] = x + 65;
                }
                else
                {
                    p[i] = x;
                }
            }
            else
            {
                int y = 26 + p[i] + atoi(k);
                do
                {
                    y = y - 26;
                }
                while (y > 122);
                if (y < 97)
                {
                    p[i] = y + 97;
                }
                else
                {
                    p[i] = y;
                }
            }
        }
    }
    return p;
}
