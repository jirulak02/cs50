#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //TODO - DONE
    int n;
    do{
        do {
            n = get_int("Put a number between 1 and 8: ");
        }
        while(n < 1);
    }
    while(n > 8);

    for(int i = 0; i < n; i++) {
        int m = n - i;
        for(int j = 1; j < m; j++) {
            printf(" ");
        }
        for(int k = n + 1; k > m; k--) {
            printf("#");
        }
        printf(" ");
        for(int l = n + 1; l > m; l--) {
            printf("#");
        }
        printf("\n");
    }
}
