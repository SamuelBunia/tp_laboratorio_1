#include "funciones.h"

//funcion para el factorial
long int CalcularFactorial(int numero)
{
    //variables
    long int factorial;
    int i;


    //inicializo resultado
    factorial = 1;

    for (i = numero; i > 1; i--) {
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
float RestarNumeros(float primerNumero, float segundoNumero){
    float resta;
    resta = primerNumero - segundoNumero;
    return resta;
}

//funcion multiplicar
float MultiplicarNumeros(float primerNumero, float segundoNumero){
    float multiplicacion;
    multiplicacion = primerNumero * segundoNumero;
    return multiplicacion;
}

//funcion dividir
float DividirNumeros(float primerNumero, float segundoNumero){
    float division;
    division = primerNumero / segundoNumero;
    return division;
}







