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


/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \param int
 * \return int
 *
 */
int MostrarMenu(eEmployee[], int, int);
/** \brief
 *
 * \param [] eEmployee
 * \param int
 * \return int
 *
 */
int initEmployees(eEmployee [], int);
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \return int
 *
 */
int addEmployee(eEmployee[], int);
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \param int
 * \return void
 *
 */
void modifyEmployee(eEmployee[], int, int);
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \param int
 * \return int
 *
 */
int findEmployeeById(eEmployee[], int, int);
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \param int
 * \return int
 *
 */
int removeEmployee(eEmployee[], int, int);
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \param int
 * \return int
 *
 */
int sortEmployees(eEmployee[], int, int);
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \return int
 *
 */
int printEmployees(eEmployee[], int);
/** \brief
 *
 * \return eEmployee
 *
 */
eEmployee cargarEmpleado();
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \return int
 *
 */
int buscarLibre(eEmployee[], int);
/** \brief
 *
 * \param eEmployee
 * \return void
 *
 */
void MostrarUnEmpleado(eEmployee);
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \return void
 *
 */
void OrdenarEmpleados(eEmployee[], int);
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \return int
 *
 */
int allSalaries(eEmployee[], int);
/** \brief
 *
 * \param eEmployee[]
 * \param int
 * \param float
 * \return int
 *
 */
int promedioSueldo(eEmployee[], int, float);




