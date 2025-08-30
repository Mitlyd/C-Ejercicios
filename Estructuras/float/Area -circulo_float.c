#include <stdio.h>
#define PI 3.1416

int main() {
    float radio, area;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    area = PI * radio * radio;
    printf("El area del circulo es: %.2f\n", area);

    return 0;
}
