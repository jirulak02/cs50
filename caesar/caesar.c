#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //TODO - DONE
    if(argc == 2) {
        string s = (argv[1]);
        int k = atoi(s);
        string p = get_string("plaintext:  ");
        printf("ciphertext: ");
        for(int i = 0; p[i] != '\0'; i++) {
            char n = p[i];
            if(isupper(n)) {
                int m = (int) n - 64;
                int x = ((m + k) % 26) + 64 ;
                printf("%c", (char) x);
            }
            else if(islower(n)) {
                int m = (int) n - 96;
                int x = ((m + k) % 26) + 96;
                printf("%c", (char) x);
            }
            else {
                printf("%c", n);
            }
        }
        printf("\n");
        return 0;
    }
    else {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
