#include <stdio.h>
#include <stdlib.h>

const int MIN_DIA = 17, MAX_DIA = 21, MES = 7;
const float INDUMENTARIA = 0.8, DEPORTE = 0.75, HOGAR = 0.85;

int main()
{
    int dia, mes, rubro;
    float importe, total;

    printf("Ingrese el dia y mes, el rubro (Indumentaria=1, Deporte=2, Hogar=3) y el importe: ");
    scanf("%d %d %d %f", &dia, &mes, &rubro, &importe);

    if (dia >= MIN_DIA && dia <= MAX_DIA && mes == MES)
    {
        switch(rubro)
        {
            case 1: total = importe * INDUMENTARIA;
                    break;
            case 2: total = importe * DEPORTE;
                    break;
            case 3: total = importe * HOGAR;
                    break;
            default: printf("Error al ingresar el rubro");
                    return 1;
        }
    }
    else
    {
        total = importe;
    }

    printf("El total a pagar es de: $%.3f", total);

    return 0;
}
