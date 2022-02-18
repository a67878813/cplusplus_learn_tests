#include <stdio.h>
#include <string.h>



struct S_Employee
{
    char Employee_Name[40];
    int Employee_Age;
    char Employee_Designation[40];
    float Employee_Salary;

};

__asm("push %rax");
__asm("xor %rax,%rax");
__asm("push %rax");
__asm("0:");

extern "C" void asmfunc(int *){ 
__asm{
    push rax
    xor rax,rax
    pop rax
    }
}

int main()
{
    int * a;
    asmfunc(a);

    struct S_Employee employee;

    strcpy(employee.Employee_Name, "Shiva");
    // printf("%s",employee.Employee_Name);
    employee.Employee_Age=30;
    strcpy(employee.Employee_Designation,"Programmer");
    employee.Employee_Salary=1000000.0f;

    printf("Employee name =%s\n", employee.Employee_Name);
    printf("Employee age =%d\n", employee.Employee_Age);
    printf("Employee designation =%s\n", employee.Employee_Designation);
    printf("Employee salary =%f\n", employee.Employee_Salary);


}