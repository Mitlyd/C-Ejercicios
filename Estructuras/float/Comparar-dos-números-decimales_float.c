#include <stdio.h>

int main() {
    float x, y;
    printf("Ingrese el primer numero: ");
    scanf("%f", &x);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &y);

    if (x > y)
        printf("%.2f es mayor que %.2f\n", x, y);
    else if (x < y)
        printf("%.2f es menor que %.2f\n", x, y);
    else
        printf("Ambos numeros son iguales.\n");

    return 0;
}
