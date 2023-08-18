#include <stdio.h>
#include <stdlib.h>
typedef struct emp {
    int id;
    char* name;
    int salary;
}employee;

void print_employee(struct emp* e)
{
printf("%d,%s,%d\n",e->id, e->name, e->salary);    
};

int main(void){
    employee e1;
    e1.id = 1;
    e1.name = "mostafa";
    e1.salary = 1000;
    print_employee(&e1);
}