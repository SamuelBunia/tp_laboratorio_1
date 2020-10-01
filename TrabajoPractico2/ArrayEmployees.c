#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include <ctype.h>
#include <string.h>

//MENU
void MostrarMenu(int opcionSeleccionada)
{
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

        /*Employee unEmpleado;
        unEmpleado=cargarEmpleado();
        mostrarUnEmpleado(unEmpleado);*/
    break;

    case 2:
    break;

    case 3:
    break;

    case 4:
    break;

    case 5:
        printf("\t!!GRACIAS POR USAR NUESTRO PROGRAMA, HASTA LUEGO!!\n");
    break;
    }
}


//cargar un empleado
eEmployee cargarEmpleado()
{
    eEmployee miEmpleado;

    printf("Ingrese id del Empleado: ");
    scanf("%d", &miEmpleado.id);
    printf("Ingrese nombre del Empleado: ");
    fflush(stdin);
    scanf("%[^\n]", miEmpleado.name);
    printf("Ingrese apellido del Empleado: ");
    fflush(stdin);
    scanf("%[^\n]", miEmpleado.lastName);
    printf("Ingrese salario del Empleado: ");
    scanf("%f", &miEmpleado.salary);
    printf("Ingrese sector del Empleado: ");
    scanf("%d", &miEmpleado.sector);

    return miEmpleado;
}

//mostrar un empleado
void MostrarUnEmpleado(eEmployee unEmpleado)
{
    printf("*ID-%d *Nombre-%s *Apellido-%s *Salario-%f *Sector-%d\n", unEmpleado.id, unEmpleado.lastName, unEmpleado.lastName, unEmpleado.salary, unEmpleado.sector);
}

//Cargar todos los empleados
void CargarTodosLosEmpleados(eEmployee listaEmpleados[], int cant)
{
    int i;
    i = initEmployees(listaEmpleados, cant);
    if(i!=1)
    {
        listaEmpleados[i] = cargarEmpleado();
    }else{
        printf("No hay espacio!!");
    }

}

//Mostrar todos los nominas
void MostrarNominaDeEmpleados(eEmployee listaEmpleados[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        MostrarUnEmpleado(listaEmpleados[i]);
    }
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

//inicializar
//buscar espacio en el array
int initEmployees(eEmployee miEmpleado[], int cant)
{

    int index=1;
    int i;
    for(i=0; i<cant; i++)
    {
        if(miEmpleado[i].isEmpty == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}
