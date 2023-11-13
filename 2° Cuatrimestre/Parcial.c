#include <stdio.h>
#include <stdlib.h>

#define EMPLEADOS 500
void cargar_vector(char vector[EMPLEADOS]);
void mostrar_vector(char vector[EMPLEADOS]);
void porcentaje_empleados(char vector[EMPLEADOS], float vec_porcentajes[3]);
char nivel_educativo(float vec_porcentajes[3]);

void main()
{
    char vector[EMPLEADOS], nivel_empleados;

    // posicion 0 = secundario, 1 = terciario y 2 = universitario
    float vec_porcentajes[3];

    cargar_vector(vector);
    mostrar_vector(vector);
    porcentaje_empleados(vector, vec_porcentajes);
    nivel_empleados = nivel_educativo(vec_porcentajes);

    printf("El nivel educativo de la myoria de los empleados es: %c", nivel_empleados);
}

void cargar_vector(char vector[EMPLEADOS])
{
    for (int i=0; i<EMPLEADOS; i++)
    {
        printf("Ingresar el nivel educativo del empleado (S=secundario, T=terciario, U=universitario): ");
        scanf(" %c", &vector[i]);
    }
}
void mostrar_vector(char vector[EMPLEADOS])
{
    for (int i=0; i<EMPLEADOS; i++)
    {
        printf("%c", vector[i]);
    }
    printf("\n");
}
void porcentaje_empleados(char vector[EMPLEADOS], float vec_porcentajes[3])
{
    // Inicializo vector
    for (int i=0; i<3; i++)
    {
        vec_porcentajes[i] = 0;
    }

    for (int i=0; i<EMPLEADOS; i++)
    {
        switch (vector[i])
        {
            case 'S':
                vec_porcentajes[0]++;
                break;
            case 'T':
                vec_porcentajes[1]++;
                break;
            case 'U':
                vec_porcentajes[2]++;
                break;
        }
    }

    // Saco porcentajes
    for (int i=0; i<3; i++)
    {
        vec_porcentajes[i] = vec_porcentajes[i] / 100 * EMPLEADOS;
    }
}
char nivel_educativo(float vec_porcentajes[3])
{
    if (vec_porcentajes[0] > vec_porcentajes[1] && vec_porcentajes[0] > vec_porcentajes[2])
    {
        return 'S';
    }
    else if (vec_porcentajes[1] > vec_porcentajes[0] && vec_porcentajes[1] > vec_porcentajes[2])
    {
        return 'T';
    }
    else
    {
        return 'U';
    }
}
