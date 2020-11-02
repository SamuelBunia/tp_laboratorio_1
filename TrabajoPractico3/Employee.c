#include <stdlib.h>
#include "Employee.h"
#include <string.h>
#include <stdio.h>
#include "LinkedList.h"

int employee_CompareByName(Employee* e1, Employee* e2)
{
    return strcmp(e1->nombre,e2->nombre);
}

int employee_CompareById(Employee* e1, Employee* e2)
{
    int compare=0;

    if(e1->id>e2->id)
    {
        compare=1;
    }
    else
    {
        if(e1->id<e2->id)
        {
            compare=-1;
        }
    }
    return compare;
}


int employee_setId(Employee* this,int id)
{
    int setteo=0;
    if(this!=NULL && id > 0)
    {
        this->id = id;
        setteo = 1;
    }
    return setteo;
}

int employee_getId(Employee* this,int* id)
{
    int getteo = 0;
    if(this!=NULL && id!=NULL)
    {
        *id=this->id;
        getteo = 1;
    }
    return getteo;
}

int employee_setNombre(Employee* this,char* nombre)
{
    int setteo=0;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        setteo = 1;
    }
    return setteo;
}
int employee_getNombre(Employee* this,char* nombre)
{
    int getteo = 0;

    if(this!=NULL && nombre!=NULL)
    {
        strcpy(nombre,this->nombre);
        getteo = 1;
    }
    return getteo;
}

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas)
{
    int setteo=0;
    if(this!=NULL && horasTrabajadas > 0)
    {
        this->horasTrabajadas = horasTrabajadas;
        setteo = 1;
    }
    return setteo;
}
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas)
{
    int getteo = 0;
    if(this!=NULL && horasTrabajadas!=NULL)
    {
        *horasTrabajadas=this->horasTrabajadas;
        getteo = 1;
    }
    return getteo;
}

int employee_setSueldo(Employee* this,int sueldo)
{
    int setteo=0;
    if(this!=NULL && sueldo > 0)
    {
        this->sueldo = sueldo;
        setteo = 1;
    }
    return setteo;
}
int employee_getSueldo(Employee* this,int* sueldo)
{
    int getteo = 0;
    if(this!=NULL && sueldo!=NULL)
    {
        *sueldo=this->sueldo;
        getteo = 1;
    }
    return getteo;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr)
{
    Employee* e1;

    int id;
    int horasTrabajo;
    float sueldo;

    id = atoi(idStr);
    horasTrabajo = atoi(horasTrabajadasStr);
    sueldo = atoi(sueldoStr);

    //despues el parser y traer datos al linkedlist
    e1 = employee_new();

    if(e1!=NULL)
    {
        employee_setId(e1,id);
        employee_setNombre(e1,nombreStr);
        employee_setHorasTrabajadas(e1,horasTrabajo);
        employee_setSueldo(e1,sueldo);
    }
    return e1;
}

Employee* employee_new()
{
    Employee* e1;
    e1 = (Employee*) malloc(sizeof(Employee));

    return e1;
}
