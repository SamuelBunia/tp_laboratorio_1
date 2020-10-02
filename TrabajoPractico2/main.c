#include "ArrayEmployees.h"
#include <ctype.h>
#include <string.h>
#define CANT 2

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
