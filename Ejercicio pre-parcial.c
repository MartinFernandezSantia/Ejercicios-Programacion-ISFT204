
// Ejercicio de alumnos y sus calificaciones
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <strings.h>
//
//void cargar_vec_respuestas(char *vec);
//void calificar_alumnos (char *vec, char nombres[][40], int *calificaciones);
//
//#define PREGUNTAS 5
//#define VALOR_RESPUESTA 5
//#define ALUMNOS 3
//
//int main()
//{
//    char vec[5];
//    char nombres[ALUMNOS][40];
//    int calificaciones[ALUMNOS];
//    int aprobados = 0, desaprobados = 0;
//
//    // Inicializo el array
//    for (int i=0; i<ALUMNOS; i++)
//    {
//        calificaciones[i] = 0;
//    }
//
//    cargar_vec_respuestas(vec);
//    calificar_alumnos(vec, nombres, calificaciones);
//
//    for (int i=0; i<ALUMNOS; i++)
//    {
//        if (calificaciones[i] >= 15)
//        {
//            aprobados++;
//            printf("Alumno: %s | calificacion: %d | nota: Aprobado\n", nombres[i], calificaciones[i]);
//        }
//        else
//        {
//            desaprobados++;
//            printf("Alumno: %s | calificacion: %d | nota: Desaprobado\n", nombres[i], calificaciones[i]);
//        }
//    }
//
//    printf("Cantidad de alumnos aprobados: %d\nCantidad de alumnos desaprobados: %d\n", aprobados, desaprobados);
//
//
//    return 0;
//}
//
//void cargar_vec_respuestas(char *vec)
//{
//    char minuscula;
//
//    for (int i=0; i<PREGUNTAS; i++)
//    {
//        do
//        {
//            printf("Ingresar respuesta a la pregunta %d (A, B, C): ", i+1);
//            fflush(stdin);
//            scanf("%c", &vec[i]);
//            vec[i] = toupper(vec[i]);
//        }
//        while (vec[i] != 'A' && vec[i] != 'B' && vec[i] != 'C');
//    }
//}
//
//void calificar_alumnos (char vec[], char nombres[][40], int calificaciones[])
//{
//    char respuesta;
//
//    for (int i=0; i<ALUMNOS; i++)
//    {
//        do
//        {
//            printf("Ingresar el apellido y nombre del alumno N%d: ", i);
//            fflush(stdin);
//            gets(nombres[i]);
//        }
//        while(strlen(nombres[i]) > 40);
//
//        for (int j=0; j<PREGUNTAS; j++)
//        {
//            do
//            {
//                printf("Ingresar respuesta a la pregunta %d (A, B, C): ", j+1);
//                scanf(" %c", &respuesta);
//                respuesta = toupper(respuesta);
//            }
//            while (respuesta != 'A' && respuesta != 'B' && respuesta != 'C');
//
//            if (respuesta == vec[j])
//            {
//                calificaciones[i] += VALOR_RESPUESTA;
//            }
//        }
//    }
//}
/////////////////////////////////////////////////////////////////////////////////////

// Ejercicio estudiantes y covid
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <strings.h>

#define RANGO1 12
#define RANGO2 15
#define RANGO3 16
#define RANGO4 18
#define ESTUDIANTES 5

typedef struct estudiante
{
    int edad;
    bool comorbilidad;
    bool vacuna;
    char tipo_vacuna;
}estudiante;

int cargarEstudiantes(estudiante *vec);

int main()
{
    int total_comorbilidad = 0, total_no_vac = 0, estudiantes_moderna_rango1 = 0, estudiantes_moderna_rango2 = 0;
    float porcentaje_vacunados = 0;
    estudiante vec_estudiantes[ESTUDIANTES];

    cargarEstudiantes(vec_estudiantes);

    for (int i=0; i<ESTUDIANTES; i++)
    {
        if (vec_estudiantes[i].comorbilidad == true)
        {
            total_comorbilidad++;
        }

        if (vec_estudiantes[i].vacuna == true)
        {
            porcentaje_vacunados++;
        }
        else
        {
            total_no_vac++;
        }

        if (vec_estudiantes[i].edad >= RANGO1 && vec_estudiantes[i].edad <= RANGO2 && tolower(vec_estudiantes[i].tipo_vacuna) == 'm')
        {
            estudiantes_moderna_rango1++;
        }
        if (vec_estudiantes[i].edad >= RANGO3 && vec_estudiantes[i].edad <= RANGO4 && tolower(vec_estudiantes[i].tipo_vacuna) == 'm')
        {
            estudiantes_moderna_rango2++;
        }
    }
    porcentaje_vacunados = porcentaje_vacunados * 100 / ESTUDIANTES;

    printf("\nCantidad con comorbilidades: %d\nPorcentaje vacunados: %.2f%%\nCantidad no vacunados: %d\nCantidad vacunados con MODERNA entre 12 y 15: %d\nCantidad vacunados con MODERNA entre 16 y 18: %d\n",
           total_comorbilidad, porcentaje_vacunados, total_no_vac, estudiantes_moderna_rango1, estudiantes_moderna_rango2);

    return 0;
}

int cargarEstudiantes(estudiante *vec)
{
   for (int i=0; i<ESTUDIANTES; i++)
   {
       do
       {
           printf("Ingrese la edad del estudiante N%d (Entre 12 y 18 inclusives): ", i);
           scanf(" %d", &vec[i].edad);
       }while(vec[i].edad < RANGO1 || vec[i].edad > RANGO4);
       do
       {
           printf("El estudiante posee comorbilidades? (1=Si, 0=No): ");
           scanf(" %d", &vec[i].comorbilidad);
       }while(vec[i].comorbilidad != 1 && vec[i].comorbilidad != 0);
       do
       {
           printf("El estudiante se aplico alguna vacuna Covid? (1=Si, 0=No): ");
           scanf(" %d", &vec[i].vacuna);
       }while(vec[i].vacuna != 1 && vec[i].vacuna != 0);
       if (vec[i].vacuna == 1)
       {
           do
           {
               printf("Cual vacuna se aplico el estudiante? (M=Moderna, C=Covishield): ");
               scanf(" %c", &vec[i].tipo_vacuna);
           }while(tolower(vec[i].tipo_vacuna) != 'm' && tolower(vec[i].tipo_vacuna) != 'c');
       }
   }

   return 0;
}
