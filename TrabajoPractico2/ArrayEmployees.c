#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include <ctype.h>
#include <string.h>

int id = 100;

//MENU
int MostrarMenu(eEmployee listaEmpleados[], int opcionSeleccionada, int cant)
{
    int selectedId;

    printf("\n\t*NOMINA DE EMPLEADOS TP2* \n\n");
    printf("|  1. Ingresar un nuevo Empleado     | \n");
    printf("|  2. Modificar Empleado ya existente| \n");
    printf("|  3. Baja de Empleado               | \n");
    printf("|  4. Informar resultados            | \n");
    printf("|  5. Salir                          | \n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcionSeleccionada);

    switch(opcionSeleccionada)
    {
    case 1:
        addEmployee(listaEmpleados, cant);
    break;

    case 2:
        printEmployees(listaEmpleados, cant);
        printf("\t==========================\n");
        printf("Ingresar Id a modificar: ");
        scanf("%d", &selectedId);
        modifyEmployee(listaEmpleados, cant, selectedId);
    break;

    case 3:
        printEmployees(listaEmpleados, cant);
        printf("\t==========================\n");
        printf("Ingresar Id a modificar: ");
        scanf("%d", &selectedId);
        removeEmployee(listaEmpleados, cant, selectedId);
    break;

    case 4:
        printEmployees(listaEmpleados, cant);
        reportResults();
    break;

    case 5:
        printf("\t\n!!GRACIAS POR USAR NUESTRO PROGRAMA, HASTA LUEGO!!\n");
    break;
    }

    return opcionSeleccionada;
}


//Llenar todos los espacio de memoria en arrays en 0 para que esté vacio
//inicializar
int initEmployees(eEmployee listaEmpleados[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        listaEmpleados[i].isEmpty=1;
    }

    return listaEmpleados[i].isEmpty;
}

//Cargar todos los empleados
int addEmployee(eEmployee listaEmpleados[], int cant)
{
    int i;
    i = buscarLibre(listaEmpleados, cant);
    if(i!=-1)
    {
        listaEmpleados[i] = cargarEmpleado();
        //printf("%d\n",listaEmpleados[i].isEmpty);
    }else{
        printf("\t\n No hay espacio!! \n");
    }

    return 0;
}
int modifyEmployee(eEmployee listaEmpleados[], int cant, int id)
{
    return 0;
}

int findEmployeeById(eEmployee listaEmpleados[], int cant, int id)
{

    return 0;
}

int removeEmployee(eEmployee listaEmpleados[], int cant, int id)
{
    return 0;
}

void reportResults()
{

}

int sortEmployees(eEmployee listaEmpleados[], int cant, int order)
{
    return 0;
}

//Mostrar todos los nominas
int printEmployees(eEmployee listaEmpleados[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listaEmpleados[i].isEmpty==0)
        {
        MostrarUnEmpleado(listaEmpleados[i]);
        }
    }

    return 0;
}

//cargar un empleado
eEmployee cargarEmpleado()
{
    eEmployee miEmpleado;



    miEmpleado.id = id;
    printf("\n*Ingrese nombre del Empleado: ");
    fflush(stdin);
    scanf("%[^\n]", miEmpleado.name);
    printf("*Ingrese apellido del Empleado: ");
    fflush(stdin);
    scanf("%[^\n]", miEmpleado.lastName);
    printf("*Ingrese salario del Empleado: ");
    scanf("%f", &miEmpleado.salary);
    printf("*Ingrese sector del Empleado: ");
    scanf("%d", &miEmpleado.sector);

    miEmpleado.isEmpty = 0;
    id++;
    return miEmpleado;
}

//buscar espacio en el array
int buscarLibre(eEmployee listaEmpleado[], int cant)
{

    int index=-1;
    int i;

    for(i=0; i<cant; i++)
    {
        if(listaEmpleado[i].isEmpty == 1)
        {
            index = i;
            break;
        }
    }
    return index;
}

//mostrar un empleado
void MostrarUnEmpleado(eEmployee unEmpleado)
{
    printf("*ID-%d *Nombre-%s *Apellido-%s *Salario-%f *Sector-%d\n", unEmpleado.id, unEmpleado.lastName, unEmpleado.lastName, unEmpleado.salary, unEmpleado.sector);
}

//Ordenar los empleados por id
void OrdenarEmpleadosPorId(eEmployee listaEmpleados[], int cant)
{
    int i;
    int j;
    eEmployee auxEmpleado;

    for(i=0; i<cant-1; i++)
    {
        for(j=i+1; j<cant; j++)
        {
            if(listaEmpleados[i].id<listaEmpleados[j].id)
            {
                auxEmpleado = listaEmpleados[i];
                listaEmpleados[i] = listaEmpleados[j];
                listaEmpleados[j] = auxEmpleado;
            }
        }
    }
}


