/*******************************************************************
* Programa: Nomina Empleados
* Objetivo: Hacer un AMB e imprimir
* Version: 02 de Octubre de 2020
* Alumno: Samuel Bunia 1C
********************************************************************/
#include "ArrayEmployees.h"
#include <ctype.h>
#include <string.h>
#define CANT 1000

int main()
{
    int opcionSeleccionada;
    eEmployee listaEmpleados[CANT];
    initEmployees(listaEmpleados, CANT);
    do{
       opcionSeleccionada = MostrarMenu(listaEmpleados, opcionSeleccionada, CANT);
    }while(opcionSeleccionada>=1 && opcionSeleccionada<=4);
    return 0;
}
