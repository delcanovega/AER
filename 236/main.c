#include <stdio.h>

int main() {
    long long int ini, mul, cells;
    long long int sum;

    scanf("%lld %lld %lld", &ini, &mul, &cells );

    while (ini != 0 || mul != 0 || cells != 0) {
        sum = 0;
        int i;
        for (i = 0; i < cells; ++i) {
            sum += ini;
            ini *= mul;
        }

        printf("%lld\n", sum);

        scanf("%lld %lld %lld", &ini, &mul, &cells );

    }

    return 0;
}