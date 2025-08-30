#include <stdio.h>

enum Mes {ENERO=1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};

int main() {
    int num;
    printf("Ingrese un numero (1-12): ");
    scanf("%d", &num);

    enum Mes mes = num;

    printf("Mes: ");
    switch (mes) {
        case ENERO: printf("Enero\n"); break;
        case FEBRERO: printf("Febrero\n"); break;
        case MARZO: printf("Marzo\n"); break;
        case ABRIL: printf("Abril\n"); break;
        case MAYO: printf("Mayo\n"); break;
        case JUNIO: printf("Junio\n"); break;
        case JULIO: printf("Julio\n"); break;
        case AGOSTO: printf("Agosto\n"); break;
        case SEPTIEMBRE: printf("Septiembre\n"); break;
        case OCTUBRE: printf("Octubre\n"); break;
        case NOVIEMBRE: printf("Noviembre\n"); break;
        case DICIEMBRE: printf("Diciembre\n"); break;
        default: printf("Numero invalido\n");
    }

    return 0;
}
