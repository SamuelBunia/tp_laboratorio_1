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

void MostrarMenu(int );
int initEmployees(eEmployee miEmpleado[], int);
void MostrarUnEmpleado(eEmployee);
void CargarTodosLosEmpleados(eEmployee[], int);
void MostrarNominaDeEmpleados(eEmployee[], int);
void OrdenarEmpleadosPorId(eEmployee[], int);
int buscarLibre(eEmployee[], int);
eEmployee cargarEmpleado();



