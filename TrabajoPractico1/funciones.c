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
int SumarNumeros(int primerNumero, int segundoNumero)//Parametros formales
{
    int suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

//funcion restar
int RestarNumeros(int primerNumero, int segundoNumero){
    int resta;
    resta = primerNumero - segundoNumero;
    return resta;
}

//funcion multiplicar
int MultiplicarNumeros(int primerNumero, int segundoNumero){
    int multiplicacion;
    multiplicacion = primerNumero * segundoNumero;
    return multiplicacion;
}

//funcion dividir
float DividirNumeros(int primerNumero, int segundoNumero){
    float division;
    division = (float)primerNumero / segundoNumero;
    return division;
}









