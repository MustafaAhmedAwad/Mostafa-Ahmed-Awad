#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SDB.h"
static studentInfo studentDataBase[MAX_STUDENTS];   //static array of type struct
static uint8 usedsized = 0;                         // initialized size to 0 

Bool SDB_IsFull()
{
return Bool(usedsized >= MAX_STUDENTS);        //Done
/*for (int32 j = 0; j < MAX_STUDENTS; j++) {
        if (studentDataBase[j].Student_ID== 0) {
            printf("An empty place is available at index: %d\n", j);
        }
    }
*/
}

//*****************************************************************************************************************//

uint8 SDB_GetUsedSize()           //done
{
    int32 i,count = 0;
for(int32 i = 0; i < MAX_STUDENTS; i++)
{
    if(studentDataBase[i].Student_ID!=0){
        count++;
    }
}
printf("the number of students in the data base is %d\n", count);

/*return usedsized;*/        //another way 
}

//*****************************************************************************************************************//

Bool SDB_AddEntry(studentInfo student)         //Done
 {
     
    if (SDB_IsFull()) {
        printf("The database is full\n");
    } else {
        printf("Enter the following data\n");

            printf("Enter Student_ID: ");
            scanf("%u", &student.Student_ID);
            if(SDB_IsIdExist(student.Student_ID)){
             SDB_APP();   
          }
          else{
           printf("Enter Student_year: ");
            scanf("%u", &student.Student_year);

            printf("Enter Course1_ID: ");
            scanf("%u", &student.Course1_ID);

            printf("Enter Course1_Grade: ");
            scanf("%u", &student.Course1_grade);

            printf("Enter Course2_ID: ");
            scanf("%u", &student.Course2_ID);

            printf("Enter Course2_Grade: ");
            scanf("%u", &student.Course2_grade);

            printf("Enter Course3_ID: ");
            scanf("%u", &student.Course3_ID);

            printf("Enter Course3_Grade: ");
            scanf("%u", &student.Course3_grade);

            studentDataBase[usedsized] = student;  // Add the student to the database
            usedsized++;  // Increment the used size
        }
            }
 }
    

  

    //*****************************************************************************************************************//


void SDB_DeletEntry(uint32 id) {         //done
    studentInfo student;
    printf("Enter Student_ID: ");
    scanf("%u", &student.Student_ID);
  
    uint8 pos = -1;   // Initialize pos (flag)
    uint8 i;
    
        if (SDB_IsIdExist(student.Student_ID)) {
            pos = i;
            // Move all elements after pos one position to the left to "delete" the entry
        for ( i = pos; i < usedsized - 1; i++) {
            studentDataBase[i] = studentDataBase[i + 1];
             usedsized--;  // Decrement the used size
        printf("The value %u is found in the data at position %c and has been deleted.\n", student.Student_ID, pos);
        return;
        }
        }
     else {
        printf("The ID is not found in the database.\n");
    }
    }
    

   /* if (pos == -1) {
        printf("The value is not found in the database.\n");
    } */


//*****************************************************************************************************************//
void PrintStudentInfo(studentInfo student) {
    printf("Student ID: %u\n", student.Student_ID);
    printf("Student Year: %u\n", student.Student_year);
    printf("Course 1 ID: %u, Grade: %u\n", student.Course1_ID, student.Course1_grade);
    printf("Course 2 ID: %u, Grade: %u\n", student.Course2_ID, student.Course2_grade);
    printf("Course 3 ID: %u, Grade: %u\n", student.Course3_ID, student.Course3_grade);
    printf("------------------------------\n");
}
//*****************************************************************************************************************//

void PrintAllStudents() {
    for (int32 i = 0; i < usedsized; i++) {
        PrintStudentInfo(studentDataBase[i]);
    }
}
//*****************************************************************************************************************//

Bool SDB_ReadEntry(uint32 id)           
{
    int32 pos=-1;
     studentInfo student; 
    printf("Enter Student_ID you want to display: \n");
    scanf("%u", &student.Student_ID);

    for (int32 i = 0; i < usedsized; i++) {
        if (studentDataBase[i].Student_ID == student.Student_ID) {
            PrintStudentInfo(studentDataBase[i]);
            pos = i;
            return Bool(true);
        }

    }

    if (pos == -1) {
        printf("The value is not found in the database.\n"); 
        return Bool(false);
}
}

//*****************************************************************************************************************//

Bool SDB_IsIdExist(uint32 id)
{
    studentInfo student;
     printf("Enter Student_ID: ");
    scanf("%u", &student.Student_ID);
  
    int32 pos = -1;   // Initialize pos (flag)

    for (int32 i = 0; i < MAX_STUDENTS; i++) {
        if (studentDataBase[i].Student_ID == student.Student_ID) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("The value is not found in the database(not exist).\n");
        return FALSE;
    } else {
printf("Student_ID %u exist in database", student.Student_ID);
return TRUE;
}
}

//*****************************************************************************************************************//

void SDB_GetList(uint8 *count, uint32 *list)
{
   
    //uint32 idList[MAX_STUDENTS];

    *count = usedsized;  // Store the number of IDs

    for (int32 i = 0; i < usedsized; i++) {
        list[i] = studentDataBase[i].Student_ID;  // Store each student ID in the list
    }

    printf("Number of IDs: %u\n", *count);
    printf("List of IDs:\n");
    for (int32 i = 0; i < *count ; i++) {
        printf("%u\n",list[i]);
    }
}

//*****************************************************************************************************************//











