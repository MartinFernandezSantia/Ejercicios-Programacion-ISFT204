#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void cargar_vec_respuestas(char notas);

#DEFINE Alumnos 70;
#DEFINE RespuestaCorrecta 5;
void main ()
{
    cargar_vec_respuestas(char notas);
}
void cargar_vec_respuestas(char notas)

{
    for (int i=0; i<5; i++)
    {
        do
        {
            printf ("Ingresar respuesta de la pregunta %d (A, B o C):"i+1);
            fflush(stdin);
            scanf("%d" notas[i]);
        }
        while (vec[i] =! 'A' && vec[i] =! 'B' && vec[i] =! 'C');
    }
}
