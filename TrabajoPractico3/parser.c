#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"

int parser_EmployeeFromText(FILE* pFile, LinkedList* pArrayListEmployee)
{
    FILE* pArchivo;
    int r,i,len;
    int id,horas,sueldo;
    char nombre[50];

    len = ll_len(pArrayListEmployee);
    pArchivo = fopen("data.txt","w");

    if(pArchivo == NULL)
    {
        return -1;
    }

    do
    {
        r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",&id,nombre,&horas,&sueldo);
        if(r==4)
        {
            FILE* aux;
            aux = employee_newParametros(id,nombre,horas,sueldo);
            ll_set(pArrayListEmployee,len,pFile);
        }
        else
        {
            break;
        }
    }
    while(!feof(pFile) && i<1000);

    fclose(pFile);
    return i;
}

int parser_EmployeeFromBinary(FILE* pFile, LinkedList* pArrayListEmployee)
{
    FILE* pArchivo;
    int r,i;
    int id,horas,sueldo;
    char nombre[50];

    pArchivo = fopen("pFile.dat","wb");

    if(pArchivo == NULL)
    {
        return -1;
    }

    do
    {
        r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",&id,nombre,&horas,&sueldo);
        //fwrite(&r,sizeof(Employee),1000,pArchivo);
        if(r==4)
        {
            FILE* aux;
            aux = employee_newParametros(id,nombre,horas,sueldo);
            /*
            employee_setId(pFile,id);
            employee_setNombre(pFile,nombre);
            employee_setHorasTrabajadas(pFile,horas);
            employee_setSueldo(pFile,sueldo);
            */

            ll_set(pArrayListEmployee,i,pFile);
        }
        else
        {
            printf("Error!");
            break;
        }
    }
    while(!feof(pFile) && i<1000);

    fclose(pFile);
    return i;
}
