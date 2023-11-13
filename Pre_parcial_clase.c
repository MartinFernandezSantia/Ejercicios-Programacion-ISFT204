#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define ALUMNOS 3
///EJEMPLO VECTOR DE CADENAS DE CARACTERES
/*int main()
{
    char nombres[5][15]; //// {"ANA","BENJAMIN", "GABRIELA"...}F
    int edad[5];

    for (int i=0;i<5;i++)
    {
        printf("\nIngrese nombre ");

        do
        {
            fflush(stdin);
            gets(nombres[i]);

        }while (strlen(gets(nombres[i]))>15);
        printf("\nIngrese edad: ");
        scanf("%d",&edad[i]);
    }

    for (int i=0;i<5;i++)
    {
        printf("\nIngrese nombre y edad %s  %d", nombres[i],edad[i]);
        fflush(stdin);
    }

}

*/

///EJEMPLO 1 - PRE PARCIAL
/*void carga_correctas (char correctas[5]);
void nombre_y_calificacion(char vector[5], char nombre[][50], int calificacion[]);


int main()
{
    char correctas[5];
    char nombre[ALUMNOS][50];
    int calificaciones[ALUMNOS]={0};

    carga_correctas(correctas);
    nombre_y_calificacion(correctas, nombre, calificaciones);

    return 0;
}



void carga_correctas(char correctas[5])
{
    correctas[0] = 'B';
    correctas[1] = 'C';
    correctas[2] = 'A';
    correctas[3] = 'B';
    correctas[4] = 'A';
}

void nombre_y_calificacion(char correctas[], char nombre[][50], int calificaciones[])
{
    char examen[5];

    for (int i=0; i<ALUMNOS; i++)
    {
        printf("Ingrese Apellido y Nombre: \n");
        fflush(stdin);
        gets(nombre[i]);   ///scanf("%s", nombre[i]);
        //printf("%s", nombre[i]);

        printf("Ingrese las respuestas del examen:\n");
        for (int j = 0; j < 5; j++)
        {
            fflush(stdin);
            scanf(" %c", &examen[j]);
            if (examen[j] == correctas[j])
            {
                calificaciones[i]+=5;
            }
        }
        printf("El alumno %s obtuvo %d\n", nombre[i], calificaciones[i]);
    }
}
*/

///EJEMPLO 2 - PRE PARCIAL
void cargaRespuestas(char vectorResp[],int n);
void calificacion1(int n,char vecNota[],char vectorResp[],char nombre[][15], int calificacion[]);
void resultados(char nombre[][15],int calificacion[]);
void main()
{
    char vectorResp[5],vecNota[5];
    int n=5;
    char nombre[ALUMNOS][15];
    int calificacion[ALUMNOS];

    cargaRespuestas(vectorResp,n);
    calificacion1(n,vecNota,vectorResp,nombre, calificacion);
    resultados(nombre,calificacion);
}
void cargaRespuestas(char vectorResp[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Ingrese respues correcta: (A,B o C)\n");
        fflush(stdin);
        scanf("%c",&vectorResp[i]);
        vectorResp[i]=tolower(vectorResp[i]);
        while(vectorResp[i]!='a' && vectorResp[i]!='b' && vectorResp[i]!='c')
        {
            printf("\nValor incorrecto, ingrese nuevamente\n");
            fflush(stdin);
            scanf("%c",&vectorResp[i]);
            vectorResp[i]=tolower(vectorResp[i]);
        }
        printf("%c\n",vectorResp[i]);
    }
}
void calificacion1(int n,char vecNota[],char vectorResp[],char nombre[][15], int calificacion[])
{
    //int contNota=0;
    for(int i=0; i<ALUMNOS; i++)
    {
        printf("\n\nIngrese nombre del alumno\n");
        fflush(stdin);
        gets(nombre[i]);
        int contNota=0;
        for(int j=0; j<n; j++)
        {
            printf("\nIngrese respuesta del alumno: \n");
            fflush(stdin);
            scanf("%c",&vecNota[j]);
            vecNota[j]=tolower(vecNota[j]);
            while(vecNota[j]!='a' && vecNota[j]!='b' && vecNota[j]!='c')
            {
                printf("\nValor incorrecto, ingrese nuevamente\n");
                fflush(stdin);
                scanf("%c",&vecNota[j]);
                vecNota[j]=tolower(vecNota[j]);
            }
            if(vecNota[j]==vectorResp[j])
            {
                contNota=contNota+5;
            }
        }
        printf("total notas del alumno(%d)",contNota);
        calificacion[i]=contNota;
    }
}

void resultados(char nombre[][15],int calificacion[])
{
    int contAp=0, contDe=0;
    printf("\nNOMBRE   CALIFICACION   NOTA\n");
    for (int i=0;i<ALUMNOS;i++)
    {
        if (calificacion[i]>=15)
        {
            printf("\n %s %d  APROBADO",nombre[i],calificacion[i]);
            contAp++;
        }
        else
        {
            printf("\n %s %d  DESAPROBADO",nombre[i],calificacion[i]);
            contDe++;
        }
    }
    printf("\nCantidad Aprobados %d \n",contAp);
    printf("\nCantidad Desaprobados %d \n",contDe);

}


/*Ej1 /*Dado un vector de N elementos enteros positivos, implementar las siguientes funciones:
a) Cargar vector
b) Mostrar vector
c) Calcular cuantos elementos del vector son m�ltiplos de 5.
*/
/*void carga (int vector[], int n);
void mostrar (int vector[],int n);
int multiplo5(int vector[],int n);
int main()
{
    int n,cont;
    int vector[n];
    printf("\nIngrese la cantidad de elementos para el vector: \n");
    scanf ("%d",&n);
    carga(vector,n);
    mostrar(vector,n);
    cont= multiplo5(vector, n);
    printf("\nLa cantidad de elemenots multiplos de 5 son: %d \n",cont);
     return 0;
}

void carga (int vector[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("\nIngrese un valor positivo: \n");
        scanf("%d",&vector[i]);
        if (vector[i]<0)
        do{
            printf("\nIngrese un valor positivo: \n");
            scanf("%d",&vector[i]);
        }while(vector[i]<0);
    }

}

void mostrar (int vector[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {

        printf( " %d ",vector[i]);
    }
}
int multiplo5(int vector[],int n)
{
    int i,cont=0;
    for(i=0;i<n;i++)
    {
        if(vector[i] % 5 ==0)
            cont++;
    }
    return cont;
}*/
/*
Ej2 /*Dado un vector de N elementos enteros positivos, implementar las siguientes funciones:
a) Cargar vector
b) Mostrar vector
c) Calcular cuantos elementos del vector son m�ltiplos de 5.
*//*
void carga (int vector[], int n);
void mostrar (int vector[],int n);
int multiplo5(int vector[],int n);
int main()
{
    int n,cont;
    int vector[n];
    printf("\nIngrese la cantidad de elementos para el vector: \n");
    scanf ("%d",&n);
    carga(vector,n);
    mostrar(vector,n);
    cont= multiplo5(vector, n);
    printf("\nLa cantidad de elemenots multiplos de 5 son: %d \n",cont);
     return 0;
}

void carga (int vector[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("\nIngrese un valor positivo: \n");
        scanf("%d",&vector[i]);
        if (vector[i]<0)
        do{
            printf("\nIngrese un valor positivo: \n");
            scanf("%d",&vector[i]);
        }while(vector[i]<0);
    }

}

void mostrar (int vector[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {

        printf( " %d ",vector[i]);
    }
}
int multiplo5(int vector[],int n)
{
    int i,cont=0;
    for(i=0;i<n;i++)
    {
        if(vector[i] % 5 ==0)
            cont++;
    }
    return cont;
}

Ej  /*3. Calcular la suma de los valores negativos y el producto de los valores positivos distintos de
cero de un vector A de N componentes enteras. */
/*void carga(int vector[],int n);
void calculo(int vector[],int n,int *suma,int *producto);

int main()
{
    int n,suma,producto;
    printf("\n Digite la cantidad de elementos que tiene el vector: ");
    scanf("%d",&n);
    int vector[n];
    carga(vector,n);
    calculo(vector,n,&suma,&producto);
    printf("\n La suma de los negativos es: %d, el producto de los positivos es: %d",suma,producto);
    return 0;
}
void carga(int vector[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("\n Ingrese un valor a carga en el vector: ");
        scanf ("%d",&vector[i]);
    }
}
void calculo(int vector[],int n,int *suma,int *producto)
{
    int i;
    *producto=1;
    *suma=0;

    for (i=0;i<n;i++)
    {
        if (vector[i]<0)
            *suma= *suma+vector[i];
      else if (vector[i]>0)
            *producto = *producto * vector[i];

    }
}
*/
/*5. Dado un arreglo unidimensional A de N componentes reales, crear dos nuevos vectores B y
C tales que: B tenga solo las componentes de A que ocupan lugar par y C solo las
componentes de A que ocupan lugar impar. Imprimir los tres vectores.
Vector A = 7 � 5 � 6 � 8 � 2 � 3 � 10
Vector B = 7 � 6 � 2 � 10
Vector C = 5 � 8 � 3 */
/*void carga (float vectorA[],int n);
void carga2(float vectorA[],int n,int *contb,int *contc,float vectorB[],float vectorC[]);
void muestra (float vectorA[],float vectorB[],float vectorC[],int n,int *contB,int *contC);

int main()
{
    int n,contb,contc;
    printf ("\nIngrese la cantidad de elementos para el vector: \n");
    scanf ("%d",&n);
    float vectorA[n],vectorB[n],vectorC[n];
    carga (vectorA, n);
    carga2( vectorA,n, &contb, &contc, vectorB, vectorC);
    muestra (vectorA,vectorB, vectorC, n, &contb, &contc);

    return 0;;

}
void carga (float vector[],int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf ("\nIngrese un valor: \n");
        scanf("%f",&vector[i]);
    }
}
void carga2(float vectorA[],int n,int *contb,int *contc,float vectorB[],float vectorC[])
{
    int i;
    *contb=0;
    *contc=0;
    for(i=0; i<n; i++)
    {
        if (i%2==0)
        {
            vectorB[*contb]=vectorA[i];
            *contb=*contb+1;
        }
        else if (i % 2!=0)
        {
            vectorC[*contc]=vectorA[i];
            *contc = *contc+1;
        }

    }
}
void muestra (float vectorA[],float vectorB[],float vectorC[],int n,int *contb,int *contc)
{
    int i;
    printf("\nVector A: \n");
    for (i=0; i<n; i++)
    {
        printf ("\n\ %.2f \n",vectorA[i]);
    }
    printf("\nVector B: \n");
    for (i=0; i< *contb; i++)

        printf ("\n\ %.2f \n",vectorB[i]);

    printf("\nVector C: \n");
    for (i=0; i< *contc; i++)
    {
        printf ("\n\ %.2f \n",vectorC[i]);

    }
}
*/
