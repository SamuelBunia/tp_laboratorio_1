/******************************************************************************
SAMUEL BUNIA
1RO C.

Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir

• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones en el .h
castear a entero el flotante de factorial para restarlo con el mismo, y si me da 0 exacto no tiene coma
si da ,algo entonces es flotante
*******************************************************************************/
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
        int opcion;
        int flagMenu;
        int flagOpcion1;
        int flagOpcion2;

        flagOpcion1 = 0;
        flagOpcion2 = 0;
        flagMenu = 0;

do
    {
        if(flagMenu==0||(flagOpcion1==0&&flagOpcion2==0)){
        printf("1. Ingresar 1er operando A=X.\n2. Ingresar 2do operando B=Y.\n3.Calcular todas las operaciones\n4.Informar resultados\n5.Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);
        flagMenu = 1;
        }else{
            if(flagMenu==1&&flagOpcion2==0&&flagOpcion1==1){
                printf("1. Ingresar 1er operando A=%.2f\n2. Ingresar 2do operando B=Y\n3.Calcular todas las operaciones\n4.Informar resultados\n5.Salir\n", numero1);
                printf("Elija una opcion: ");
                scanf("%d", &opcion);
            }else if (flagMenu==1&&flagOpcion2==1&&flagOpcion1==0){
                printf("1. Ingresar 1er operando A=X\n2. Ingresar 2do operando B=%.2f\n3.Calcular todas las operaciones\n4.Informar resultados\n5.Salir\n", numero2);
                printf("Elija una opcion: ");
                scanf("%d", &opcion);
            }else{
                printf("1. Ingresar 1er operando A=%.2f\n2. Ingresar 2do operando B=%.2f\n3.Calcular todas las operaciones\n4.Informar resultados\n5.Salir\n", numero1, numero2);
                printf("Elija una opcion: ");
                scanf("%d", &opcion);
            }
        }

        switch(opcion)
        {
            case 1:
                //Ingresar 1er operando (A=x)
                printf("Ingrese 1er numero: ");
                scanf("%f", &numero1);
                numeroEntero1 = (int)numero1-numero1;
                flagOpcion1 = 1;

            break;
            case 2:
                //Ingresar 2do operando (B=y)
                printf("Ingrese 2do numero: ");
                scanf("%f", &numero2);
                numeroEntero2 = (int)numero2-numero2;
                flagOpcion2 = 1;

            //Calcular todas las operaciones
            case 3:
                if(flagOpcion1==0&&flagOpcion2==0){
                printf("\nNo ingreso ningun numero antes\n")    ;
                }else{

                suma = SumarNumeros(numero1,numero2);
                resta = RestarNumeros(numero1,numero2);
                division = DividirNumeros(numero1,numero2);
                multiplicacion = MultiplicarNumeros(numero1,numero2);
                factorial1 = CalcularFactorial(numero1);
                factorial2 = CalcularFactorial(numero2);

            break;

            //Informar resultados
            case 4:
                if(flagOpcion1==0&&flagOpcion2==0){
                    printf("\nNo ingreso ningun numero antes\n")    ;
                }else{
                    printf("Los resultado son: \n");
                    /*A*/printf("A.-El resultado de (A+B) %.2f mas %.2f es: %.2f \n", numero1, numero2, suma);
                    /*B*/printf("B.-El resultado de (A-B) %.2f menos %.2f es: %.2f \n", numero1, numero2, resta);

                    /*C*/if(numero1==0||numero2==0){
                    printf("C.-No es posible dividir por cero\n");
                    }else{
                        printf("C.-El resultado de (A/B) %.2f entre %.2f es: %.2f \n", numero1, numero2, division);
                    }

                    /*D*/printf("D.-El resultado de (A*B) %.2f por %.2f es: %.2f \n", numero1, numero2, multiplicacion);

                    /*E*/if(numeroEntero1==0){
                    printf("E.-El factorial de %.2f es: %ld ", numero1, factorial1);
                        }else{
                        printf("E.-No se puede hacer el factorial de un decimal\n");
                        }

                    if(numeroEntero2==0){
                        printf(" y El factorial de %.2f es: %ld \n", numero2, factorial2);
                        }else{
                        printf(" y No se puede hacer el factorial de un decimal\n");
                        }
                }
            break;

            case 5:
                //Salir
                printf("Gracias por usar nuestro programa chau \n");
            break;

                }
        }
    }while(opcion>=1 && opcion<=4);
    return 0;
}

