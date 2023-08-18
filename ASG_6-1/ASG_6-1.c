#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    int degree;
    int section;
} Student;

void printStudents(Student **students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i]->name);
        printf("Age: %d\n", students[i]->age);
        printf("Degree: %d\n", students[i]->degree);
        printf("Section: %d\n", students[i]->section);
        printf("\n");
    }
}

int main() {
    Student *studentArray[4]; // Array of pointers to Student structs
    
    Student student1 = {"mostafa", 22, 98, 4};
    Student student2 = {"ahmed", 20, 85, 2};
    Student student3 = {"mohamed", 21, 88, 1};
    Student student4 = {"mina", 21, 90, 4};
    
    studentArray[0] = &student1;
    studentArray[1] = &student2;
    studentArray[2] = &student3;
    studentArray[3] = &student4;

    printStudents(studentArray, 4); // Call the printStudents function
    
    return 0;
}
