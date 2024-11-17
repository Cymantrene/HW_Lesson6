#include <stdio.h>

int isPrime(int num) {

    if(num == 1 || num==0) return 0;
    for (int i = 2; i < num; i++) {

        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int number;

    scanf("%d", &number);

    if (isPrime(number)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
