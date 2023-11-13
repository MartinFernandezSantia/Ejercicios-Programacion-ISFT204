#include <stdio.h>
#include <math.h>>
//#define DATO 4

// Guia de ejercicios de Operadores
//3
//void main()
//{
//    int margen, precio_costo;
//    printf("Ingrese el precio de costo y el margen: ");
//    scanf("%d %d", &precio_costo, &margen);
//    printf("El precio neto sera de: %f", precio_costo * ((float)(100 + margen) / 100));
//}


//4
//void main()
//{
//    float cateto1, cateto2, hipotenusa, area, perimetro;
//
//    printf("Ingrese el primer y segundo cateto del triangulo rectangulo: ");
//    scanf("%f %f", &cateto1, &cateto2);
//
//    hipotenusa = sqrt(pow(cateto1, 2.0) + pow(cateto2, 2.0));
//    area = (cateto1 * cateto2) / 2.0;
//    perimetro = hipotenusa + cateto1 + cateto2;
//
//    printf("Hipotenusa: %.3f\n Area: %.3f\n Perimetro: %.3f", hipotenusa, area, perimetro);
//
//}


//7
//void main()
//{
//   int segundos, minutos, horas;
//    printf("Ingresar segundos: ");
//    scanf("%d", &segundos);
//
//    horas = (segundos / 60) / 60;
//    minutos = (segundos / 60) % 60;
//    segundos = segundos % 60;
//    printf("\n%d:%d:%d",horas, minutos, segundos);
//}

//8
//void main()
//{
//    #define IVA 0.16
//
//    int codigo, cantidad, descuento;
//    float precio, precio_total;
//
//    printf("Porfavor ingrese el codigo del producto, su precio, la cantidad y su descuento: ");
//    scanf("%d %f %d %d", &codigo, &precio, &cantidad, &descuento);
//
//    precio_total = precio * cantidad;
//
//    system("cls");
//    printf("     --- LOLA ---");
//    printf("\n%d         $%.2f", codigo, precio);
//    printf("\n%d            $%.2f", cantidad, precio_total);
//    printf("\n-%d%%          $%.2f", descuento, (precio_total * descuento) / 100.0);
//    printf("\n16%% IVA       $%.2f", precio_total * IVA);
//    printf("\nTOTAL          $%.2f", precio_total - (descuento * 100.0) / precio + precio_total * IVA);
//
//}


// Actividad - Operadores Lenguaje C
//void main()
//{
//    int date, year, month, day;
//
//    printf("Ingrese la fecha en formato aaaammdd: ");
//    scanf("%d", &date);
//
//    year = date / 10000;
//    month = (date % 10000) / 100;
//    day = date % 100;
//
//    printf("Dia: %02d\nMes: %02d\nAño: %04d", day, month, year);
//}


//Estrucutas condicionales
//Ejercicio 1
//void main()
//{
//    char letra;
//
//    printf("Ingrese una letra: ");
//    scanf("%c", &letra);
//
//    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
//    {
//        printf("Es una vocal");
//    }
//    else
//    {
//        printf("Es una consonante");
//    }
//}


//Ejercicio 2
//void main()
//{
//    int n1, n2, n3;
//
//    printf("Ingresar 3 numeros: ");
//    scanf("%d %d %d", &n1, &n2, &n3);
//
//    if (n1 < 0)
//    {
//        printf("El producto es: %d", n1*n2*n3);
//    }
//    else
//    {
//        printf("La suma es: %d", n1+n2+n3);
//    }
//}


//Ejercicio 4
//const float DESCUENTO = 0.85;
//const int MES = 7, DIA1 = 1, DIA2 = 7;
//
//void  main()
//{
//    float importe;
//    int dia, mes;
//
//    printf("Ingresar el dia, mes y el importe de la compra: ");
//    scanf("%d %d %f", &dia, &mes, &importe);
//
//    if (dia > DIA1 && dia < DIA2 && mes == MES)
//    {
//        importe *= DESCUENTO;
//    }
//
//    printf("Se le debe cobrar $%.2f al cliente.", importe);
//}


// Ejercicios usando switch
// Ejercicio 1
//void main()
//{
//    float n1, n2;
//    int operacion;
//
//    printf("Ingresar dos numeros y la operacion (1=suma, 2=resta, 3=multiplicacion, 4=division): ");
//    scanf("%f %f %d", &n1, &n2, &operacion);
//
//    switch (operacion)
//    {
//        case 1: {
//            printf("La suma de los numeros introducidos es: %.2f", n1 + n2);
//            break;
//        }
//        case 2: {
//            printf("La resta de los numeros introducidos es: %.2f", n1 - n2);
//            break;
//        }
//        case 3: {
//            printf("La multiplicacion de los numeros introducidos es: %.2f", n1 * n2);
//            break;
//        }
//        case 4: {
//            if (n2 != 0){printf("La suma de los numeros introducidos es: %.2f", n1 / n2);}
//            else{printf("No se puede dividir por 0");}
//            break;
//        }
//        default: {
//            printf("Numero para realizar la operacion es incorrecto");
//        }
//    }
//}

// Ejercicio 2
//int main()
//{
//    int codigo, clave;
//    float precio, descuento;
//
//    printf("Ingresar el codigo, clave y precio del articulo: ");
//    scanf("%d %d %f", &codigo, &clave, &precio);
//
//    switch(clave)
//    {
//        case 1: {
//            descuento = 0.9;
//            break;
//        }
//        case 2: {
//            descuento = 0.8;
//            break;
//        }
//        default: {
//            printf("Clave erronea (Clave 1 = 10%%, Clave 2 = 20%%)");
//            return 1;
//        }
//    }
//
//    printf("Codigo: %d - Clave: %d - Precio de veta: %.2f - Precio con descuento: %.2f", codigo, clave, precio, precio * descuento);
//
//    return 0;
//}
