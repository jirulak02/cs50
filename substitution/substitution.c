#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //TODO - DONE
    string s = argv[1];
    if(argc == 2) {
        if(strlen(s) == 26) {
            for(int j = 0; j < 26; j++) {
                if(isalpha(s[j])) {
                    for(int k = 0; k < 26; k++) {
                        if(s[j] == s[k]) {
                            if(j == k) {}
                            else {
                                printf("Key must not contain repeated characters.\n");
                                return 1;
                            }
                        }
                        else {}
                    }
                }
                else {
                    printf("Key must only contain alphabetical characters.\n");
                    return 1;
                }
            }

        }
        else {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
    }
    else {
        printf("Usage: ./substitution key\n");
        return 1;
    }


    string p = get_string("plaintext:  ");
    printf("ciphertext: ");
    for(int i = 0; p[i] != '\0'; i++) {
        char n = p[i];
        if(isupper(n)) {
            int m = (int) n - 65;
            char x = s[m];
            printf("%c", x);
        }
        else if(islower(n)) {
            int m = (int) n - 97;
            char x = s[m];
            printf("%c", x);
        }
        else {
            printf("%c", n);
        }
    }
    printf("\n");
    return 0;
}
