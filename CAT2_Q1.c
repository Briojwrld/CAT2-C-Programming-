#include<stdio.h>
//defining the structure for the employee
typedef struct{
char name [25];
int ID;
char department [20];
float salary;
char email [50];
}employee;
int main(){
//declare a variable of the structure type and initialize it
employee emp;
strcpy(emp. name, "John Doe");
emp. ID=12345;
strcpy(emp. department, "Human Resources");
emp. salary= 55000.50;
strcpy (emp. email, "John.doe@company.com");
//print the values of the fields
printf("name: %s\n",emp. name);
printf("ID: %d\n",emp. ID);
printf("salary: %.2f\n", emp. salary);
printf("email: %s\n",emp. email);
return 0;
}