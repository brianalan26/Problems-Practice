#include <stdio.h>

int main() {
    long long n, m, a;  
    scanf("%lld %lld %lld", &n, &m, &a);

    long long length = (n + a - 1) / a;  // same as ceil(n / a)
    long long width = (m + a - 1) / a;   // same as ceil(m / a)

    long long total = length * width;

    printf("%lld\n", total);

    return 0;
}
