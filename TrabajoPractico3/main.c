/*SAMUEL BUNIA 1RO C*/
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    LinkedList* miLista;
    int opcionSeleccionada;
    miLista = ll_newLinkedList();

    Employee* aux;


    do{
        AccionMenu(opcionSeleccionada);

    }while(opcionSeleccionada>=1 && opcionSeleccionada<10);
    return 0;
}
