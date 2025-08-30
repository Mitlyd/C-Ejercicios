#include <stdio.h>

enum Dia {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};

int main() {
    enum Dia hoy = DOMINGO;

    printf("Hoy es: ");
    switch (hoy) {
        case LUNES: printf("Lunes\n"); break;
        case MARTES: printf("Martes\n"); break;
        case MIERCOLES: printf("Miercoles\n"); break;
        case JUEVES: printf("Jueves\n"); break;
        case VIERNES: printf("Viernes\n"); break;
        case SABADO: printf("Sabado\n"); break;
        case DOMINGO: printf("Domingo\n"); break;
    }

    return 0;
}
