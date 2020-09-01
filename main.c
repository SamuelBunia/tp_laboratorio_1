#include <stdio.h>
#include <stdlib.h>


/*
1. depuracion queda acotada
2. Reutilizacion
3. Independencia del codigo

*/


//prototipo - declaracion - firma
//tipo nombre (datos que recibe -> Parametros)

int SumarNumeros(int, int);
int RestarNumeros(int, int);
int MultiplicarNumeros(int , int);
float DividirNumeros(int, int);

int main()
{
    int unNumero;
    int otroNumero;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    

    printf("Ingrese un numero: ");
    scanf("%d", &unNumero);
    printf("Ingrese otro numero: ");
    scanf("%d", &otroNumero);

    suma = SumarNumeros(unNumero, otroNumero);
    printf("La suma de los dos numeros es: %d\n", suma);
    
    resta = RestarNumeros(unNumero, otroNumero);
    printf("El resultado de restar los dos numeros es: %d\n", resta);
    
    multiplicacion = MultiplicarNumeros(unNumero, otroNumero);
    printf("El resultado de multiplicar los dos numeros es: %d\n", multiplicacion);
    
    division = DividirNumeros(unNumero, otroNumero);
    printf("El resultado de dividir los dos numeros es: %.2f\n", division);
    
    return 0;
}

int SumarNumeros(int primerNumero, int segundoNumero)//Parametros formales
{
    int suma;
    suma = primerNumero + segundoNumero;
    return suma;
}

int RestarNumeros(int primerNumero, int segundoNumero){
    int resta;
    resta = primerNumero - segundoNumero;
    return resta;
}

int MultiplicarNumeros(int primerNumero, int segundoNumero){
    int multiplicacion;
    multiplicacion = primerNumero * segundoNumero;
    return multiplicacion;
}

float DividirNumeros(int primerNumero, int segundoNumero){
    float division;
    division = (float)primerNumero / segundoNumero;
    return division;
}

