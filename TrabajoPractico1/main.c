/*******************************************************************
* Programa: Calculadora
* Objetivo: Resolver Operaciones Matematicos y validar errores posibles
* Version: 11 de Septiembre de 2020
* Alumno: Samuel Bunia 1C
********************************************************************/
#include <stdio.h>
#include "funciones.h"
#include <ctype.h>
#include <string.h>

int main()
{
    float numero1;
    float numero2;
    float numeroEntero1;
    float numeroEntero2;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    long int factorial1;
    long int factorial2;
    int flagOpcion1;
    int flagOpcion2;
    int flagOpcion3;
    int opcionSeleccionada;
    numero1 = 0;
    numero2 = 0;
    flagOpcion1 = 0;
    flagOpcion2 = 0;
    flagOpcion3 = 0;

    do{
        MostrarMenu(numero1, numero2);
        printf("Seleccione una opcion: ");
        scanf("%d",&opcionSeleccionada);

        switch(opcionSeleccionada)
        {
        case 1:
            printf("Ingrese 1er numero: ");
            fflush(stdin);
            scanf("%f", &numero1);
            numeroEntero1 = (int)numero1-numero1;
            flagOpcion1 = 1;
        break;
        case 2:
            printf("Ingrese 2do numero: ");
            fflush(stdin);
            scanf("%f", &numero2);
            numeroEntero2 = (int)numero2-numero2;
            flagOpcion2 = 1;
        break;
        case 3:
            if(flagOpcion1==0&&flagOpcion2==0)
            {
                printf("\nNo ingreso ningun numero antes\n");
            }
            else if ((flagOpcion1==1&&flagOpcion2==0)||(flagOpcion1==0&&flagOpcion2==1))
            {
                printf("Falta ingresar un operador\n");
            }
            else
            {
                suma = SumarNumeros(numero1,numero2);
                resta = RestarNumeros(numero1,numero2);
                division = DividirNumeros(numero1,numero2);
                multiplicacion = MultiplicarNumeros(numero1,numero2);
                factorial1 = CalcularFactorial(numero1);
                factorial2 = CalcularFactorial(numero2);
                printf("Operaciones realizadas!!\n");
                flagOpcion3 = 1;
            }
        break;
        case 4:
            if(flagOpcion3==0)
            {
                printf("No realizo la operacion 3!!");
            }
            else
            {
                if(flagOpcion1==0&&flagOpcion2==0)
                {
                    printf("\nNo ingreso ningun numero antes\n");
                }
                else
                {
                    printf("Los resultado son: \n");
                    /*A*/printf("A.-El resultado de (A+B) %.2f mas %.2f es: %.2f \n", numero1, numero2, suma);
                    /*B*/printf("B.-El resultado de (A-B) %.2f menos %.2f es: %.2f \n", numero1, numero2, resta);
                    /*C*/if(numero1==0||numero2==0)
                    {
                        printf("C.-No es posible dividir por cero\n");
                    }
                    else
                    {
                        printf("C.-El resultado de (A/B) %.2f entre %.2f es: %.2f \n", numero1, numero2, division);
                    }

                    /*D*/printf("D.-El resultado de (A*B) %.2f por %.2f es: %.2f \n", numero1, numero2, multiplicacion);
                    /*E*/if(numeroEntero1==0&&numero1>0){//primer numero
                        printf("E.-El factorial de %.2f es: %ld ", numero1, factorial1);
                    }else{
                        printf("E.- No se puede hacer el factorial de A ");
                    }

                    if(numeroEntero2==0&&numero2>0){//segundo numero
                        printf(" y El factorial de %.2f es: %ld \n", numero2, factorial2);
                    }else{
                        printf(" No se puede hacer el factorial de B\n");
                    }
                }
            }
        break;
        case 5:
            printf("\t!!GRACIAS POR USAR LA CALCULADORA!!\n");
        break;
        }
    }
    while(opcionSeleccionada>=1 && opcionSeleccionada<=4);
    return 0;
}
