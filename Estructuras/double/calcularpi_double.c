#include <stdio.h>

int main() {
    int n = 1000;
    double pi = 0.0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            pi += 1.0 / (2 * i + 1);
        else
            pi -= 1.0 / (2 * i + 1);
    }

    pi *= 4.0;

    printf("Aproximacion de PI con %d terminos: %.15f\n", n, pi);
    return 0;
}
