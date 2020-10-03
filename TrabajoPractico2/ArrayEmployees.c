#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include <ctype.h>
#include <string.h>

int id = 100;
int auxiliar=0;

//MENU
int MostrarMenu(eEmployee listaEmpleados[], int opcionSeleccionada, int cant)
{
    //int selectedId;
    int case4;
    printf("\n\t°°°NOMINA DE EMPLEADOS TP2°°° \n\n");
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
        modifyEmployee(listaEmpleados, cant, id);
        break;

    case 3:
        printEmployees(listaEmpleados, cant);
        printf("\t==========================\n");
        removeEmployee(listaEmpleados, cant, id);
        break;

    case 4:
        printf("¿Que quieres informar?\n 1. Listado de los empleados ordenados alfabéticamente por Apellido y Sector.\n 2. Total y promedio de los salarios, y cuántos empleados superan el salario promedio\n");
        scanf("%d", &case4);

        switch(case4)
        {
            case 1:
                OrdenarEmpleados(listaEmpleados, cant);
                printEmployees(listaEmpleados, cant);
            break;

            case 2:
                allSalaries(listaEmpleados, cant);
                promedioSueldo(listaEmpleados, cant));
            break;

        }
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
    }
    else
    {
        printf("\t\n No hay espacio!! \n");
    }

    return 0;
}
void modifyEmployee(eEmployee listaEmpleados[], int cant, int selectedId)
{

    int i;
    int idEncontrado;


    printf("Ingrese el ID a modificar: ");
    scanf("%d", &selectedId);
    int modificar;

    idEncontrado = findEmployeeById(listaEmpleados, cant, selectedId);

    for(i=0; i<cant; i++)
    {

        if(idEncontrado != -1)
        {
            if(listaEmpleados[i].id == selectedId && listaEmpleados[i].isEmpty != 1)
            {
                printf("¿Que desea modificar? 1. Nombre.\n 2. Apellido.\n 3. Salario.\n 4. Sector\n. 5. Salir\n.");
                scanf("%d", &modificar);

                    switch(modificar)
                    {

                    case 1:

                            printf ("\nIngrese el Nombre: ");
                            fflush(stdin);
                            scanf ("%[^\n]",listaEmpleados[i].name);

                    break;
                    case 2:

                                printf ("Ingrese el Apellido: ");
                                fflush(stdin);
                                scanf ("%[^\n]",listaEmpleados[i].lastName);

                    break;

                    case 3:

                        printf ("Ingrese el salario: ");
                        scanf ("%f", &listaEmpleados[i].salary);

                    break;
                    case 4:


                        printf ("Ingrese el sector: ");
                        scanf ("%d", &listaEmpleados[i].sector);


                    break;
                    case 5:

                    break;
                    default:
                        printf("opcion incorrecta.");
                    break;



                    }
            }
        }
    }
}
int findEmployeeById(eEmployee listaEmpleados[], int cant, int id)
{

    int i;
    int idEcontrado;

    idEcontrado = -1;


    for(i=0; i<cant; i++)
    {
        if(listaEmpleados[i].id == id && listaEmpleados[i].isEmpty != 1)
        {
            idEcontrado =  i;
        }
    }



    return idEcontrado;
}



int removeEmployee(eEmployee listaEmpleados[], int cant, int selectedId)
{
    int i;
    int index;
    index = -1;

    for(i=0; i<cant; i++)
    {
        printf("Ingresar Id del empleado a eliminar: ");
        scanf("%d", &selectedId);
        if(listaEmpleados[i].id==selectedId)
        {
            listaEmpleados[i].isEmpty=1;
            index=0;
            break;
        }
    }
    printf("\t°°°Usuario Eliminado°°°\n");
    return index;
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
    printf("\n*ID-%2d *Nombre: %5s *Apellido: %5s *Salario: %.2f *Sector: %1d\n", unEmpleado.id, unEmpleado.name, unEmpleado.lastName, unEmpleado.salary, unEmpleado.sector);
}

//Ordenar los empleados por id
void OrdenarEmpleados(eEmployee listaEmpleados[], int cant)
{
    int i;
    int j;
    eEmployee auxEmpleado;

    for(i=0; i<cant-1; i++)
    {
        for(j=i+1; j<cant; j++)
        {
            if(strcmpi(listaEmpleados[i].lastName,listaEmpleados[j].lastName)>0)
            {
                auxEmpleado = listaEmpleados[i];
                listaEmpleados[i] = listaEmpleados[j];
                listaEmpleados[j] = auxEmpleado;
            }else if(strcmpi(listaEmpleados[i].lastName,listaEmpleados[j].lastName)==0 && listaEmpleados[i].sector>listaEmpleados[j].sector)
            {
                auxEmpleado = listaEmpleados[i];
                listaEmpleados[i] = listaEmpleados[j];
                listaEmpleados[j] = auxEmpleado;

            }
        }
    }
}

//suma de salarios
int allSalaries(eEmployee listaEmpleados[], int cant)
{
    int i;
    float contador;

    contador = 0;

    for(i=0;i<cant;i++)
    {
       if(listaEmpleados[i].isEmpty != 1)
       {

        contador = contador + listaEmpleados[i].salary;

        auxiliar++;

       }
    }
    return contador;
}

//promedio de los sueldos
int promedioSueldo(eEmployee listaEmpleados[], int cant)
{
   float acumulador;
   float resultado;

    acumulador = allSalaries(listaEmpleados, cant);
    resultado = (float)acumulador / auxiliar;

   return resultado;

}


