#include <stdio.h>
#include <stdlib.h>

void main()
{
    int fecha, anio, mes, dia;

    printf("Ingrese la fecha con formato: aaaammdd\n");
    scanf("%d", &fecha);
    anio = fecha / 10000;
    mes = (fecha % 10000) / 100;
    dia = fecha % 100;

    printf("D%ca %d\n", 161, dia);
    printf("Mes %d\n", mes);
    printf("A%co %d\n", 164, anio);
}
////////////////////////////////////////////////////

/// Ejercicio 6 - Escribir un programa que simule a una calculadora sencilla.
/// Este programa pedirá dos números por teclado y calculará la suma,
/// la resta, el producto y la división de ambos.

// /***/ int main()
// {

//     int suma, resta, producto, num_1, num_2;
//     float division;

//     printf("Ingresa el primer numero\n");
//     scanf("%d", &num_1);
//     printf("Ingresa el segundo numero\n");
//     scanf("%d", &num_2);
//     suma = num_1 + num_2;
//     printf("La suma de los numeros es: %d\n\n", suma);
//     resta = num_1 - num_2;
//     printf("La resta de los numeros es : %d\n\n", resta);
//     producto = num_1 * num_2;
//     printf("El producto de los numeros es : %d\n\n", producto);
//     // division=num_1/num_2;
//     division = num_2 != 0 ? num_1 / num_2 : -1;
//     // printf("La division de los numeros es %.2f", num_2 != 0 ? num_1 / num_2 : "No puede dividir por 0");
//     printf("La division de los numeros es : %.2f\n\n", division);

//     return 0;
// }

/**
int main ()
{
    int suma, resta, producto, n1, n2;
    float division;
    printf("\nIngrese dos n%cmeros ",163);
    printf("\n\tNumero 1 ");
    scanf("%d",&n1);
    printf("\n\tNumero 2 ");
    scanf("%d",&n2);
    suma=n1+n2;
    resta=n1-n2;
    producto=n1*n2;
    division=n1/n2;
    printf("\nLa suma de los n%cmeros es %d \n",163,suma);
    printf("\nLa resta de los n%cmeros es %d\n",163,resta);
    printf("\nLa multiplicaci%cn de los n%cmeros es %d\n",162,163,producto);
    printf("\nLa divisi%cn de los n%cmeros es %.2f\n",162,163,division);
    return 0;

}
*/
//

/***Ejercicio 7 - ....se desea un programa que lea un tiempo expresado en segundos
y muestre su equivalencia en horas, minutos y segundos. Por ejemplo, si se introduce
4550 segundos, debe mostrar: 1 hora, 15 minutos y 50 segundos.
/****
void main()
{
    int tiempo, horas, minutos, segundos;

    printf("Ingrese un tiempo en segundos\n");
    scanf ("%d", &tiempo);
    horas = (tiempo/60)/60;
    minutos = (tiempo/60)-(horas*60);
    segundos = tiempo%60;

    printf ("horas %d \n", horas);
    printf ("minutos %d \n", minutos);
    printf ("segundos %d \n", segundos);

}
*/

/***Ejercicio 8 - La franquicia de tiendas de ropa Lola nos ha pedido que realicemos un programa
para su terminal punto de venta. El programa deberá solicitar el código del artículo a vender,
su precio en pesos, la cantidad de artículos que se desean y el descuento a aplicar (en tanto
por ciento) sobre el precio inicial. Con esos datos, el programa debe mostrar por pantalla un
ticket como el que sigue:
---- LOLA ----
codigo producto ----- precio
cantidad ------------ precio total
descuento ----------- descuento sobre el precio total
16% IVA ------------- 16% precio total sin descuento
TOTAL --------------- precio final

*/
