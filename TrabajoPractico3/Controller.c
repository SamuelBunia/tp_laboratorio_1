#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"

int controller_loadFromText(char* path, LinkedList* pArrayListEmployee)
{
    return 1;
}


int controller_loadFromBinary(char* path, LinkedList* pArrayListEmployee)
{
    return 1;
}


int controller_addEmployee(LinkedList* pArrayListEmployee)
{

    return 1;
}


int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}


int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}


int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    int len;
    Employee* unEmpleado;
    int i;

    len = ll_len(pArrayListEmployee);

    for(i=0;i<len;i++)
    {
        unEmpleado = (Employee*) ll_get(pArrayListEmployee,i);
        printf("%d--%s--%d--%d", unEmpleado->id, unEmpleado->nombre,unEmpleado->horasTrabajadas,unEmpleado->sueldo);
    }

    return 1;
}


int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}


int controller_saveAsText(char* path, LinkedList* pArrayListEmployee)
{
    FILE* pFile;
    Employee* unEmpleado;
    int len;
    int correcto;
    int i;

    if(path != NULL && pArrayListEmployee != NULL)
    {
        pFile=fopen(path,"w");

        if(pFile!=NULL)
        {
            len = ll_len(pArrayListEmployee);

            for(i=0;i<len;i++)
            {
                fprintf(pFile,"%d--%s--%d--%d\n",unEmpleado->id,unEmpleado->nombre,unEmpleado->horasTrabajadas,unEmpleado->sueldo);
            }
        }
        correcto=1;
    }

    return correcto;
}


int controller_saveAsBinary(char* path, LinkedList* pArrayListEmployee)
{
    return 1;
}

int MostrarMenu()
{
    int opcion;
    printf(" _______________________________________________________________________________________________________\n");
    printf("|\t\t\t\t같같캛ienvenido a tu Empresa같같�\t\t\t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).  \t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t2. Cargar los datos de los empleados desde el archivo data.csv (modo binario). \t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t3. Alta de empleado \t\t\t\t\t\t\t\t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t4. Modificar datos de empleado  \t\t\t\t\t\t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t5. Baja de empleado \t\t\t\t\t\t\t\t\t        | \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t6. Listar empleados \t\t\t\t\t\t\t\t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t7. Ordenar empleados \t\t\t\t\t\t\t\t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t8. Guardar los datos de los empleados en el archivo data.csv (modo texto). \t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t9. Guardar los datos de los empleados en el archivo data.csv (modo binario). \t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\t10. Salir \t\t\t\t\t\t\t\t\t\t\t| \n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|_______________________________________________________________________________________________________|\n");
    printf("|\tElija una opcion: \t\t\t\t\t\t\t\t\t        | \n");
    printf("|_______________________________________________________________________________________________________|\n");
    scanf("%d", &opcion);
    return opcion;
}

void AccionMenu(int opcionSeleccionada)
{
    FILE* pFile;
    LinkedList* pArrayListEmployee;

    opcionSeleccionada=MostrarMenu();

    switch(opcionSeleccionada)
        {
        case 1:
            controller_ListEmployee(pArrayListEmployee);
            parser_EmployeeFromText(pFile,pArrayListEmployee);
            system("pause");
            system("cls");
        break;
        case 2:
        //CARGAR MASCOTAS
            system("pause");
            system("cls");
        break;
        case 3:

            system("pause");
            system("cls");
        break;
        case 4:

            system("pause");
            system("cls");
        break;
        case 5:

            system("pause");
            system("cls");
        break;
        case 6:

            system("pause");
            system("cls");
        break;
        case 7:

            system("pause");
            system("cls");
        break;
        case 8:

            system("pause");
            system("cls");
        break;
        case 9:
//controller
            system("pause");
            system("cls");
        break;
        case 10:
            printf("Muchas Gracias...! Hasta luego.\n");
        break;
        }
}

