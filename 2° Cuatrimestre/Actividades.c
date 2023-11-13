#include <stdio.h>
#include <stdlib.h>

// Actividad clase 7 en grupo
#include <string.h>
void resultadoPromedio(float *max_promedio_curso, char *nombre_max_curso);
void promedioCurso(float *max_promedio_quinto, char *nombre_max_quinto);

void main ()
{
    char nombre_max_quinto[20];
    float max_promedio_quinto = 0;

    for (int i=0; i<3; i++)
    {
        float max_promedio_curso = 0;
        char nombre_max_curso[20];

        promedioCurso(&max_promedio_curso, &nombre_max_curso);

        printf("El mejor promedio del curso %d pertence al alumno %s con un promedio de: %.2f\n", i+1, nombre_max_curso, max_promedio_curso);

       if (max_promedio_curso > max_promedio_quinto)
        {
            max_promedio_quinto = max_promedio_curso;
            strcpy(nombre_max_quinto, nombre_max_curso);
        }
    }

    printf("El alumno %s posee el mayor promedio de todo quinto, con: %.2f", nombre_max_quinto, max_promedio_quinto);
}

void resultadoPromedio(float *promedio, char *nombre)
{
    int cant_parciales = 0;
    float nota;

    printf("Ingresar el nombre del alumno: ");
    gets(nombre);

    while (1)
    {
        printf("Ingrese la nota del parcial o 101 para finalizar: ");
        fflush(stdin);
        scanf("%f", &nota);
        getchar();
        if (nota == 101){break;}
        *promedio += nota;
        cant_parciales++;
    }
    *promedio = *promedio / cant_parciales;
}

void promedioCurso(float *max_promedio_curso, char *nombre_max_curso)
{
    int cant_alumnos;

    printf("Ingresar la cantidad de alumnos: ");
    fflush(stdin);
    scanf("%d", &cant_alumnos);
    getchar();

    for (int j=0; j<cant_alumnos; j++)
    {
        char nombre[20];
        float promedio = 0;

        resultadoPromedio(&promedio, &nombre);

        if (promedio > *max_promedio_curso)
        {
            *max_promedio_curso = promedio;
            strcpy(nombre_max_curso, nombre);
        }
    }
}
