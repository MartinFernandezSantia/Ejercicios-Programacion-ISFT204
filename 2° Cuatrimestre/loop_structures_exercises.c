// EJERCICIO 1
//#include <stdio.h>
//void main()
//{
//    float candidato1 = 0, candidato2 = 0, candidato3 = 0;
//    int nroBoleta = 1, nroCandidato, votos = 0;
//
//    while(nroBoleta != 0)
//    {
//        printf("Ingrese el numero de boleta y el del candidato. Para finalizar ingrese 0 como numero de boleta: ");
//        scanf("%d %d", &nroBoleta, &nroCandidato);
//
//        if (nroBoleta != 0)
//        {
//
//
//            switch (nroCandidato) {
//                case 1:
//                    candidato1++; break;
//                case 2:
//                    candidato2++; break;
//                case 3:
//                    candidato3++; break;
//            }
//
//            votos++;
//        }
//    }
//
//    candidato1 = candidato1 * 100 / votos;
//    candidato2 = candidato2 * 100 / votos;
//    candidato3 = candidato3 * 100 / votos;
//
//    if (candidato1 >= candidato2 && candidato1 >= candidato3){printf("Candidato1 es el mas votado, con %.2f%% de votos\n", candidato1);}
//    if (candidato2 >= candidato1 && candidato2 >= candidato3){printf("Candidato2 es el mas votado, con %.2f%% de votos\n", candidato2);}
//    if (candidato3 >= candidato2 && candidato3 >= candidato1){printf("Candidato3 es el mas votado, con %.2f%% de votos\n", candidato3);}
//
//    if (candidato1 > 50) {printf("Ganador Candidato1\n");}
//    if (candidato2 > 50) {printf("Ganador Candidato2\n");}
//    if (candidato3 > 50) {printf("Ganador Candidato3\n");}
//}
//////////////////////////////////////////////////////////////////////////////////////////

// EJERCICIO 2
//#include <stdio.h>
//#include <string.h>
//void main()
//{
//    int historiaC, edad, delgadez = 0, saludable = 0, sobrepeso = 0;
//    char apellido[50];
//    float peso, altura;
//    char estadoN[20];
//
//    do
//    {
//        printf("Ingresar apellido del paciente: ");
//        gets(apellido);
//        printf("Ingresar la historia clinica, edad, peso (kg), y altura (m) del paciente. Ingresar 0 como historia clinica para finalizar: ");
//        scanf("%d %d %f %f%*c", &historiaC, &edad, &peso, &altura);
//
//        if (historiaC != 0)
//        {
//            float indice = peso / (altura * altura);
//
//            if (indice <= 17.9)
//                {strcpy(estadoN, "Delgadez");
//                delgadez++;}
//            else if (indice >= 18 && indice <= 24.9)
//                {strcpy(estadoN, "Peso Saludable");
//                saludable++;}
//            else if (indice >= 25)
//                {strcpy(estadoN, "Sobrepeso");
//                sobrepeso++;}
//
//            printf("Historia Clinica: %d - Apellido: %s - Edad: %d - Estado Nutricional: %s\n", historiaC, apellido, edad, estadoN);
//        }
//    } while (historiaC != 0);
//
//    printf("Cantidad de pacientes con delgadez: %d\n", delgadez);
//    printf("Cantidad de pacientes con peso saludable: %d\n", saludable);
//    printf("Cantidad de pacientes con sobrepeso: %d\n", sobrepeso);
//}
/////////////////////////////////////////////////////////////////////////////////////

// EJERCICIO 3
//#include <stdio.h>
//
//void main()
//{
//    int codCiudad, bufferCodCiudad;
//    float fum2020, fum2010, maxDisminucion = 100.0;
//
//    do
//    {
//        printf("Ingrese el codigo de la ciudad y el porcentaje de fumadores en 2010 y 2020: ");
//        scanf("%d %f %f", &codCiudad, &fum2010, &fum2020);
//
//        if (fum2020 <= fum2010 && (fum2020 - fum2010) < maxDisminucion && codCiudad != 0)
//        {
//            maxDisminucion = fum2020 - fum2010;
//            bufferCodCiudad = codCiudad;
//        }
//    }
//    while (codCiudad != 0);
//
//    printf("La ciudad que mas ha disminuido la cantidad de fumadores es la ciudad con codigo %d", bufferCodCiudad);
//}
///////////////////////////////////////////////////////////////////////////////////////

// EJERCICIO 4

#include <stdio.h>

void main()
{
    float INDUMENTARIA = 0.8, DEPORTE = 0.75 , HOGAR = 0.85;
    int MES_DESCUENTO = 7, INICIO = 17, FIN = 21;
    int mes, dia, rubro;
    float importe;

    do
    {
        printf("Ingrese el mes, dia, rubro e importe de la compra: ");
        scanf("%d %d %d %f", &mes, &dia, &rubro, &importe);

        if (dia != 0)
        {
            if (mes == MES_DESCUENTO && dia <= FIN && dia >= INICIO && rubro < 4 && rubro > 0)
            {
                switch (rubro)
                {
                    case 1: importe = importe * INDUMENTARIA;
                        break;
                    case 2: importe = importe * DEPORTE;
                        break;
                    case 3: importe = importe * HOGAR;
                        break;
                }
            }
        }

        printf("El total a pagar es: %.2f\n", importe);
    }
    while (dia != 0);
}
