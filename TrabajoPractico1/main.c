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
• Documentar todas las funciones

*******************************************************************************/
#include <stdio.h>
#include "funciones.h"

int main()
{
        int numero1;
        int numero2;
        int suma;
        int resta;
        int multiplicacion;
        long int factorial1;
        long int factorial2;
        float division;
        int opcion;

    do
    {
        printf("1. Ingresar 1er operando.\n2. Ingresar 2do operando\n3.Calcular todas las operaciones\n4.Informar resultados\n5.Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                //Ingresar 1er operando (A=x)
                printf("Ingrese 1er numero: ");
                scanf("%d", &numero1);
                if(numero1>0){
                    printf("Su numero es A=%d \n", numero1);
                }else{
                    printf("Su numero es A=X \n");
                }
            break;
            case 2:
                //Ingresar 2do operando (B=y)
                printf("Ingrese 2do numero: ");
                scanf("%d", &numero2);
                if(numero1>0){
                    printf("Su numero es B=%d \n", numero2);
                }else{
                    printf("Su numero es B=Y \n");
                }
            break;
            //Calcular todas las operaciones
            case 3:
                suma = SumarNumeros(numero1,numero2);
                resta = RestarNumeros(numero1,numero2);
                division = DividirNumeros(numero1,numero2);
                multiplicacion = MultiplicarNumeros(numero1,numero2);
                factorial1 = CalcularFactorial(numero1);
                factorial2 = CalcularFactorial(numero2);

            break;
            case 4:
                //Informar resultados
                printf("Los resultado son: \n");
                printf("A.-El resultado de (A+B) %d mas %d es: %d \n", numero1, numero2, suma);
                printf("B.-El resultado de (A-B) %d menos %d es: %d \n", numero1, numero2, resta);
                printf("C.-El resultado de (A/B) %d entre %d es: %.2f \n", numero1, numero2, division);
                printf("D.-El resultado de (A*B) %d por %d es: %d \n", numero1, numero2, multiplicacion);
                printf("E.-El factorial de %d es: %ld y El factorial de %d es: %ld \n", numero1, factorial1, numero2, factorial2);
            break;
            case 5:
                //Salir
                printf("Gracias por usar nuestro programa chau \n");
            break;

        }

    }while(opcion>=1 && opcion<=4);




    return 0;

}
