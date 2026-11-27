#include <stdio.h>

long long factorial(int n) {
    long long f = 1;
    int i;
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input (need 0 <= r <= n)\n");
    } else {
        printf("%dC%d = %lld\n", n, r, nCr(n, r));
    }

    return 0;
}