//structure employee.
//Author :Martin Nzioki Ngao.
//REG NO.CT101/G/22078/24
//Date:7/11/2024
#include<stdio.h>
#include<string.h>
//Definition of the structure 
struct employee{
 char name[25];
 int id;
 char department[20];
 float salary;
 char email [50];
}
employee;
int main(){
 //Declaration and initialization 
 strcpy (employee.name,"john Doe");
employee.id=12345;
 strcpy(employee.department,"Human resources");
 employee.salary=55000.50;
 strcpy (employee.email,"john.doe@company.com");
 printf("name:%s\n",employee.name);
 printf("id:%d",employee.id);
  printf("department:%s\n",employee.department);
  printf("salary:%f\n",employee.salary);
  printf("email:%s",employee.email);
  return 0;
}
