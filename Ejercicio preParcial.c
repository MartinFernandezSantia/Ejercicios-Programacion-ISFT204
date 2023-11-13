#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void cargar_vec(char nombres[][10]);

void main()
{
    char nombres[3][10];

    cargar_vec(nombres);

    for (int i=0; i<3; i++)
    {
        puts(nombres[i]);
    }

}

void cargar_vec(char nombres[][10])
{
    for (int i=0; i<3; i++)
    {
        fflush(stdin);
        gets(nombres[i]);
    }
}
