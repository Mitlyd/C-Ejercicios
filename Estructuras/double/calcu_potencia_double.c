#include <stdio.h>
#include <math.h>

int main() {
    double base, exponente, resultado;

    printf("Ingrese la base: ");
    scanf("%lf", &base);
    printf("Ingrese el exponente: ");
    scanf("%lf", &exponente);

    resultado = pow(base, exponente);

    printf("%.5f ^ %.5f = %.10f\n", base, exponente, resultado);
    return 0;
}
