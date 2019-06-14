#include "LinkedList.h"
#ifndef employee_H_INCLUDED
#define employee_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}Employee;

Employee* employee_new();
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr);
void employee_delete();

int employee_setId(Employee* this,int id);
int employee_getId(Employee* this,int* id);

int employee_setNombre(Employee* this,char* nombre);
int employee_getNombre(Employee* this,char* nombre);

int employee_setHorasTrabajadas(Employee* this,int horasTrabajadas);
int employee_getHorasTrabajadas(Employee* this,int* horasTrabajadas);

int employee_setSueldo(Employee* this,int sueldo);
int employee_getSueldo(Employee* this,int* sueldo);

int employee_add (LinkedList* pArrayListEmployee);
int employee_edit(LinkedList* pArrayListEmployee);
int employee_removeEmployee(LinkedList* pArrayListEmployee);
int employee_list(LinkedList* pArrayListEmployee);
int employee_sort(LinkedList* pArrayListEmployee);
int employee_saveAsText(char* path , LinkedList* pArrayListEmployee);
int employee_saveAsBinary(char* path , LinkedList* pArrayListEmployee);

int generadorId(LinkedList* pArrayListEmployee);

int porId(Employee* empleadoUno, Employee* empleadoDos);
int porNombre(Employee* empleadoUno, Employee* empleadoDos);
int porHorasTrabajadas(Employee* empleadoUno, Employee* empleadoDos);
int porSueldos(Employee* empleadoUno, Employee* empleadoDos);
#endif // employee_H_INCLUDED
