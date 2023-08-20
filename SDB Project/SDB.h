#ifndef SDB_H
#define SDB_H
#include "STD.h"         //Include the previously defined data types

#define MAX_STUDENTS 10

                         //new data types
     typedef struct
{
uint32 Student_ID;
uint32 Student_year;
uint32 Course1_ID;
uint32 Course1_grade;
uint32 Course2_ID;
uint32 Course2_grade;
uint32 Course3_ID;
uint32 Course3_grade;
} studentInfo;

//Function declarations
Bool SDB_AddEntry(studentInfo);
uint8 SDB_GetUsedSize()
Bool SDB_ReadEntry(uint32 id);               
void SDB_GetList(uint8 *count, uint32 *list);
Bool SDB_IsIdExist(uint32 id);
void SDB_DeletEntry(uint32 id);
Bool SDB_IsFull();
void PrintStudentInfo(studentInfo student);
void PrintAllStudents();
void SDB_APP();
void SDB_action(uint8 choice);
#endif 

