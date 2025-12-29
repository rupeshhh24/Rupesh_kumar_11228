#include <stdio.h>

int main() {
    int n, i;
    int isPrime = 1;   
    
    printf("Enter a number: ");
    scanf("%d", &n);

    
    if (n > 0) {
        printf("The number is Positive.\n");
    }
    if (n < 0) {
        printf("The number is Negative.\n");
    }
    if (n == 0) {
        printf("The number is Zero.\n");
    }

    
    if (n != 0) {   
        if (n % 2 == 0) {
            printf("The number is Even.\n");
        } else {
            printf("The number is Odd.\n");
        }
    }

    
    if (n <= 1) {
        isPrime = 0;   
    } else {
        for (i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    
    if (isPrime == 1) {
        printf("The number is a Prime number.\n");
    } else {
        printf("The number is NOT a Prime number.\n");
    }

    
    return 0;
}
