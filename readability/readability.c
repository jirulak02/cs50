#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>


int count_letters(string b);
int count_words(string b);
int count_sentences(string b);


int main(void)
{
    string b;
    do {
        b = get_string("Text: ");
    }
    while(b[0] == '\0');

    printf("%s\n", b);
    int l = count_letters(b);
    int w = count_words(b);
    int s = count_sentences(b);
    printf("%i letters\n", l);
    printf("%i words\n", w);
    printf("%i sentences\n", s);
    int L = l / w * 100;
    int S = s / w * 100;
    double index = 0.0588 * L - 0.296 * S - 15.8;

    if(index < 1) {
        printf("Before Grade 1\n");
    }
    else if(index > 16) {
        printf("Grade 16+\n");
    }
    else{
        printf("Grade %i\n", (int) round(index));
    }
}

int count_letters(string b)
{
    //TODO - DONE
    int letters = 0;
    for(int i = 0; b[i] != '\0'; i++) {
        char a = b[i];
        if(isalpha(a)) {
            letters++;
        }
        else {
        }
    }
    return letters;
}

int count_words(string b)
{
    //TODO - DONE
    int words = 1;
    for(int i = 0; b[i] != '\0'; i++) {
        char a = b[i];
        if(a == ' ') {
            words++;
        }
        else {
        }
    }
    return words;
}

int count_sentences(string b)
{
    //TODO - DONE
    int sentences = 0;
    for(int i = 0; b[i] != '\0'; i++) {
        char a = b[i];
        if(a == '!' || a == '.' || a == '?') {
            sentences++;
        }
        else {
        }
    }
    return sentences;
}
