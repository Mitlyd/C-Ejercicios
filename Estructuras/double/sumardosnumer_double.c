#include <stdio.h>

int main() {
    double a, b, suma;
    printf("Ingrese el primer numero: ");
    scanf("%lf", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &b);

    suma = a + b;
    printf("La suma es: %.10f\n", suma);
    return 0;
}
