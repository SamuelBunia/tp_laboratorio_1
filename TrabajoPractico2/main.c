/*******************************************************************
* Programa: Nomina Empleados
* Objetivo: Hacer una nomina de Empleados con ABM y consultas y validaciones
* Version: 02 de Octubre de 2020
* Alumno: Samuel Bunia 1C
********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include <ctype.h>
#include <string.h>

int main()
{
    int opcionSeleccionada;

    //eEmployee* cualquiernombre;
    //initEmployees(cualquiernombre, 7);

    do{
        MostrarMenu(opcionSeleccionada);


    }while(opcionSeleccionada>=1 && opcionSeleccionada<=4);
    return 0;
}
