#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //TODO - DONE
    long n;
    do {
        n = get_long("Number: ");
    }
    while(n < 4000000000000 || n > 10000000000000000);

    int sum = 0;
    long m = n;
    for(int i = 0; i < 16; i++) {
        if(i % 2 == 1) {
            int n1 = m % 10;
            int n2 = n1 * 2;
            int n3 = n2 % 10;
            int n4 = n2 / 10;
            int n5 = n3 + n4;
            sum = sum + n5;
            m = m / 10;
        }
        else {
            int n6 = m % 10;
            m = m / 10;
            sum = sum + n6;
        }
    }
    if(sum % 10 == 0) {
        int n16 = n / 1000000000000000;
        int p16 = n16 % 10;
        int n15 = n / 100000000000000;
        int p15 = n15 % 10;
        int n14 = n / 10000000000000;
        int p14 = n14 % 10;
        int n13 = n / 1000000000000;
        int p13 = n13 % 10;
        if(p16 == 5) {
            if(p15 == 1 || p15 == 2 || p15 == 3 || p15 == 4 || p15 == 5) {
                printf("MASTERCARD\n");
            }
            else {
                printf("INVALID\n");
            }
        }
        else if(p16 == 4) {
            printf("VISA\n");
        }
        else if(p16 == 0 && p15 == 0 && p14 == 0 && p13 == 4) {
            printf("VISA\n");
        }
        else if(p16 == 0 && p15 == 3) {
            if(p14 == 4 || p14 == 7) {
                printf("AMEX\n");
            }
            else {
                printf("INVALID\n");
            }
        }
        else {
        printf("INVALID\n");
        }

    }
    else {
        printf("INVALID\n");
    }
}
