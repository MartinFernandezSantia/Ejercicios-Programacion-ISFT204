//1. Escribir un programa que lea 10 números por teclado, los almacene en un array y muestre el promedio
#include <stdio.h>
#include <stdlib.h>

//void main()
//{
//    const int TEN = 10;
//    float media = 0, vec[10];
//
//    for (int i=0; i<TEN; i++)
//    {
//        printf("Ingrese un numero: ");
//        scanf("%f", &vec[i]);
//        media += vec[i];
//    }
//
//    media = media / TEN;
//
//    printf("La media de los numeros ingresados: %.2f", media);
//}

///////////////////////////////////////////////////////////////////////////////////////////////////
//2. Desarrollar un programa en C, que permita cargar un vector de N elementos enteros, mostrarlo
//por pantalla, mostrar la suma de todos sus elementos, determinar cual es el elemento mayor, y
//calcular el promedio.
//Utilizar funciones para la resolución del ejercicio, por ejemplo:
//     void cargar_vec(int vector[], int n);
//     void imprimir_vec(int vector[], int n);
//     int suma(int vector[], int n);
//     int mayor(int vector[], int n);
//     int promedio(int vector[], int n);

//void cargar_vec(int vector[], int n);
//void imprimir_vec(int vector[], int n);
//int suma(int vector[], int n);
//int mayor(int vector[], int n);
//float promedio(int n, int sum);
//
//void main()
//{
//    int sum_total, max, n;
//    float prom;
//
//    printf("Ingrese la cantidad total de numeros que desea computar: ");
//    scanf("%d", &n);
//
//    int vec[n];
//
//    cargar_vec(vec, n);
//    imprimir_vec(vec, n);
//    sum_total = suma(vec, n);
//    max = mayor(vec, n);
//    prom = promedio(n, sum_total);
//
//    printf("La suma total de los numeros ingresados es: %d\n", sum_total);
//    printf("El mayor numero ingresado es: %d\n", max);
//    printf("El promedio de los numeros ingresados es: %.2f", prom);
//}
//
//void cargar_vec(int vector[], int n)
//{
//    for (int i=0; i<n; i++)
//    {
//        printf("Ingrese un numero: ");
//        scanf("%d", &vector[i]);
//    }
//}
//
//void imprimir_vec(int vector[], int n)
//{
//    for (int i=0; i<n; i++)
//    {
//        printf("El vector en la posicion %d tiene el valor de %d\n", i, vector[i]);
//    }
//}
//
//int suma(int vector[], int n)
//{
//    int suma = 0;
//    for (int i=0; i<n; i++)
//    {
//        suma += vector[i];
//    }
//
//    return suma;
//}
//int mayor(int vector[], int n)
//{
//    int max_n = 0;
//    for (int i=0; i<n; i++)
//    {
//        if (vector[i] > max_n)
//        {
//            max_n = vector[i];
//        }
//    }
//    return max_n;
//}
//float promedio(int n, int sum)
//{
//    return sum / n;
//}

/////////////////////////////////////////////////////////////

//Desarrollar un programa en C que solicite ingresar el nombre de un alumno y que guarde en un
//vector las calificaciones obtenidas en el primer cuatrimestre (puede tener entre 1 a 5 notas).
//Calcular el promedio. Mostrar por pantalla el nombre del alumno, las calificaciones y el promedio.

//void main()
//{
//    char nombre[20];
//    float arr[5], promedio;
//    int i;
//
//    printf("Ingrese el nombre del alumno: ");
//    gets(nombre);
//
//    for (i=1; i<=5; i++)
//    {
//        printf("Ingrese la calificación del alumno (5 calificaciones max, ingrese -1 para finalizar): ");
//        scanf("%f", &arr[i]);
//        if (arr[i] == -1)
//        {
//            break;
//        }
//        promedio += arr[i];
//    }
//
//    promedio = promedio / i;
//
//    printf("El promedio de las notas del alumno %s es %.2f", nombre, promedio);
//}
//////////////////////////////////////////////////////////////////////////////////////////

//Sea B un arreglo de elementos enteros. Desarrollar un programa en C que permita mediante el uso
//de un menú, seleccionar una de las siguientes opciones:
//    a. Asignar el valor (9) a todos los elementos de subíndice impar e imprimir el arreglo
//    modificado
//    b. Calcular la suma de todos los elementos del arreglo e imprimirla
//    c. Construir un arreglo C tal que sea B permutado (C[0]=A[N], C[1]=A[N-1],… ) Imprimir
//    los elementos pares del vector B.

void functionA(int arr[], int n);
void functionB(int arr[], int n);
void functionC(int arr[], int n);

void main()
{
    #define N 10
    const int B[N] = {5, 29, 0, 15, 7, 9, 24, 128, 430, 54};
    char opcion;

    printf("Ingresar 'a', 'b' o 'c': ");
    scanf("%c", &opcion);

    switch (opcion)
    {
        case 'a':
            functionA(B, N);
            break;
        case 'b':
            functionB(B, N);
            break;
        case 'c':
            functionC(B, N);
            break;
        default:
            printf("El valor ingresado no es una opcion\n");
            break;
    }
}

void functionA(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        arr[i] = 9;
        printf("%d\n", arr[i]);
    }
}
void functionB(int arr[], int n)
{

}
void functionC(int arr[], int n)
{

}
