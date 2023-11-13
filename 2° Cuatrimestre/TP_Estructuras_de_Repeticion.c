#include <stdio.h>

void ejercicio1()
{
    char problema;
    int n, k;
    float promedio = 0;

    printf("Seleccione el problema a ejecutar (a,b,c,d,e): ");
    scanf(" %c", &problema);

    switch (problema)
    {
        case 'a':
            for (int i=1; i < 11; i++)
            {
                printf("%d\n", i);
            }
            break;
        case 'b':
            printf("Ingrese la cantidad de numeros a mostrar: ");
            scanf(" %d", &n);

            for (int i=2; i <= n*2; i+=2)
            {
                printf("%d\n", i);
            }
            break;
        case 'c':
           printf("Ingrese el valor de K: ");
           scanf(" %d", &k);

           for (int i = -k; i < k+1; i++)
           {
               printf("%d\n", i);
           }
           for (int i = k; i > -k-1; i--)
           {
               printf("%d\n", i);
           }
        case 'd':
            printf("Ingrese el valor de K: ");
            scanf(" %d", &k);

            for (int i=0, j=1; i+j < k; i=i+j, j++)
            {
                printf("%d, ", i+j);
            }
            break;
        case 'e':
            printf("Ingrese la cantidad de numeros de la que desea saber su promedio: ");
            scanf(" %d", &n);

            for (int i=1; i < n+1; i++)
            {
                printf("Ingrese numero %d: ", i);
                scanf(" %d", &k);
                promedio += k;
            }
            printf("El promedio de los numeros ingresados es: %.2f", promedio / n);
    }
}

void ejercicio2()
{
    int n, suma = 0;

    printf("Ingrese la cantidad de numeros a sumar: ");
    scanf(" %d", &n);

    for (int i=1; i <= n*2; i+=2)
    {
        suma += i;
    }
    printf("%d", suma);
}

void ejercicio3()
{
    float x, total;
    int y;

    printf("Ingrese el valor de X e Y: ");
    scanf(" %f %d", &x, &y);
    total = x;

    for (int i=0; i < y-1; i++)
    {
        total *= x;
    }
    printf("X elevado a Y es igual a: %.2f", total);
}

void ejercicio4()
{
    int ENERO = 31, dia = 1, diaMin = 1, diaMax = 1;
    float tempMin, tempDiaMax, tempDiaMin, tempMax;

    printf("Ingrese la temperatura maxima y minima del dia 1: ");
    scanf("%f %f", &tempMax, &tempMin);
    dia++;
    while(dia <= 3)
    {
        printf("Ingrese la temperatura maxima y minima del dia %d: ", dia);
        scanf("%f %f", &tempDiaMax, &tempDiaMin);

        if (tempDiaMin < tempMin)
        {
            tempMin = tempDiaMin;
            diaMin = dia;
        }
        if (tempDiaMax > tempMax)
        {
            tempMax = tempDiaMax;
            diaMax = dia;
        }

        dia++;
    }

    printf("El dia de menor temperatura fue el %d con %.2f grados centigrados\n", diaMin, tempMin);
    printf("El dia de mayor temperatura fue el %d con %.2f grados centigrados", diaMax, tempMax);
}

void ejercicio5()
{
    int diasMes, diaMaxAnual, mesMaxAnual;
    float tempMaxAnual;


    for (int i=1; i < 3; i++)
    {
        float tempMin, tempDiaMax, tempDiaMin, tempMax;
        int dia = 1, diaMin = 1, diaMax = 1;

        printf("Ingrese la cantidad de dias del mes: ");
        scanf(" %d", &diasMes);

        printf("Ingrese la temperatura maxima y minima del dia 1: ");
        scanf("%f %f", &tempMax, &tempMin);
        dia++;
        while(dia <= diasMes)
        {
            printf("Ingrese la temperatura maxima y minima del dia %d: ", dia);
            scanf("%f %f", &tempDiaMax, &tempDiaMin);

            if (tempDiaMin < tempMin)
            {
                tempMin = tempDiaMin;
                diaMin = dia;
            }
            if (tempDiaMax > tempMax)
            {
                tempMax = tempDiaMax;
                diaMax = dia;
            }

            dia++;
        }

        printf("En el mes %d, la temperatura maxima fue de %.2f el dia %d, y la minima fue de %.2f el dia %d\n", i, tempMax, diaMax, tempMin, diaMin);

        if (tempMax > tempMaxAnual || i == 1)
        {
            tempMaxAnual = tempMax;
            diaMaxAnual = diaMax;
            mesMaxAnual = i;
        }
    }
    printf("El dia %d del mes %d, se registro la temperatura maxima en todo el anno, de %.2f grados centigrados", diaMaxAnual, mesMaxAnual, tempMaxAnual);
}

void main()
{
    int ejercicio;

    printf("Seleccione que ejercicio quiere ejecutar: ");
    scanf(" %d", &ejercicio);

    switch (ejercicio)
    {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        case 4:
            ejercicio4();
            break;
        case 5:
            ejercicio5();
            break;
    }
}
