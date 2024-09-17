#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int x) {
    if (x < 2)
        return 0;
    
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return 0;  
    }
    return 1; 
}
int main() {
    int x;

    scanf("%d", &x);
    
    if (isPrime(x))
        printf("PRIMA\n");
    else
        printf("BUKAN\n");
    
    return 0;
}