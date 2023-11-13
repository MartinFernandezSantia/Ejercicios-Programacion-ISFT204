
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
#include <strings.h>

#define RANGO1 12
#define RANGO2 15
#define RANGO3 16
#define RANGO4 18

typedef struct estudiante
{
    int edad;
    bool comorbilidad;
    bool vacuna;
    char tipo_vacuna;
}estudiante;

int main()
{
    int total_comorbilidad = 0, total_no_vac = 0;
    float procentaje_vac_comorbilidad = 0;
}

