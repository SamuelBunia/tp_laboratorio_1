#include "funciones.h"
//funcion menu
void MostrarMenu(float numero1, float numero2)
{
        printf("\n \t*CALCULADORA TP1* \n\n");
        printf("|1. Ingresar 1er operando A=%.2f| \n", numero1);
        printf("|2. Ingresar 2do operando B=%.2f| \n", numero2);
        printf("|3. Calcular todas las operaciones| \n");
        printf("\t a) Calcular la suma (A+B)\n");
        printf("\t b) Calcular la resta (A-B)\n");
        printf("\t c) Calcular la division (A/B)\n");
        printf("\t d) Calcular la multiplicacion (A*B)\n");
        printf("\t e) Calcular el factorial (A! y B!)\n");
        printf("|4. Informar resultados| \n");
        printf("|5. Salir|\n");

}

//funcion para el factorial
long int CalcularFactorial(int numero)
{
    //variables
    long int factorial;
    int i;


    //inicializo resultado
    factorial = 1;

    for (i = numero; i > 1; i--)
    {
        factorial = factorial * i;
    }

    return factorial;
}

//funcion sumar
float SumarNumeros(float primerNumero, float segundoNumero)//Parametros formales
{

    float suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

//funcion restar
float RestarNumeros(float primerNumero, float segundoNumero)
{
    float resta;
    resta = primerNumero - segundoNumero;
    return resta;
}

//funcion multiplicar
float MultiplicarNumeros(float primerNumero, float segundoNumero)
{
    float multiplicacion;
    multiplicacion = primerNumero * segundoNumero;
    return multiplicacion;
}

//funcion dividir
float DividirNumeros(float primerNumero, float segundoNumero)
{
    float division;
    division = primerNumero / segundoNumero;
    return division;
}
