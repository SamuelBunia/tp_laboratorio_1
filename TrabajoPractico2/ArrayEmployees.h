#include <stdio.h>

typedef struct
{
int id;
char name[51];
char lastName[51];
float salary;
int sector;
int isEmpty;
}eEmployee;


int MostrarMenu(eEmployee[], int, int);
int initEmployees(eEmployee [], int);
int addEmployee(eEmployee[], int);
void modifyEmployee(eEmployee[], int, int);
int findEmployeeById(eEmployee[], int, int);
int removeEmployee(eEmployee[], int, int);
int sortEmployees(eEmployee[], int, int);
int printEmployees(eEmployee[], int);
eEmployee cargarEmpleado();
int buscarLibre(eEmployee[], int);
void reportResults();
void MostrarUnEmpleado(eEmployee);
void OrdenarEmpleados(eEmployee[], int);
int allSalaries(eEmployee[], int);
int promedioSueldo(eEmployee[], int);




