#include <stdio.h>
#include<string.h>
#include <stdlib.h>

void error(){
    printf("error");
}

struct S_Employee
{
    char Employee_Name[40];
    int Employee_Age;
    char Employee_Designation[40];
    float Employee_Salary;

};

void Flush()
{
    // char c;

    // while(getchar()!= '\n' &&   );
    fflush(stdin);

}


int main()
{
    char userChoice;
    char nextChoice;
    S_Employee Employee;

    FILE *employeeFile;
    FILE *employeeFileTemp;

    long int sizeOfEmployeeRecord;
    const char* fileName= "EMPPLOYEE.DAT";
    char *str1 = "\61\62\63\141\142\143"; //oct     /xnn  hex
    //attempt to open  the /dat file straightaway.
    // file doesn't exist, then we will go ahead and creat one.
    
    employeeFile = fopen(fileName,"rb+");
    if (employeeFile == NULL)
    {
        employeeFile = fopen(fileName,"wb+");
        if(employeeFile ==NULL)
        {
            printf("unable to open EMPLOYEE.DAT!");
            exit(1);
        };
    };

    sizeOfEmployeeRecord = sizeof(Employee);
    printf("Employee mem size is %lu bit?byte?\n",sizeof(Employee));

    while (true)
    {

        
        printf("1. Add new Employee.\n");
        printf("2. Modify Employee.\n");
        printf("3. Delete Employee.\n");
        printf("4. Pring All Employee Details.\n");
        printf("5. Exit.\n");

        printf("\nEnter an operation of your choice: :>");
        scanf(" %c", &userChoice);
        while(getchar()!= '\n');
        // fflush(stdin);
        switch (userChoice)
        {
        case '1':
            fseek(employeeFile,0,SEEK_END);
            nextChoice ='y';
            while (nextChoice == 'y')
            {
                Flush();
                printf("Add emmmmm's name: \n  add success \n");

                printf("add EMployee 's name >");
                fgets(Employee.Employee_Name,40,stdin);

                printf("age>");
                scanf("%d",&Employee.Employee_Age);
                printf("designation>");
                scanf("%39s",&Employee.Employee_Designation);
                printf("salary?>");
                scanf("%f",&Employee.Employee_Salary);

                fwrite(&Employee, sizeOfEmployeeRecord, 1, employeeFile);

                printf("\n============\nWould you like to add a new record(y/n)? \n");
                scanf(" %c", &nextChoice);
                while(getchar()!= '\n');
            }
            
            break;
        case '2':
            nextChoice = 'y';
            char Employee_Name[40];
            
            while(nextChoice=='y')
            {
                bool Is_MATCH = false;
                printf("Enter the Employee name to modify >");
                scanf("%39s", Employee_Name);
                rewind(employeeFile);
                /* Moves the file position indicator to the beginning of the given file stream.

                The function is equivalent to std::fseek(stream, 0, SEEK_SET);, except that end-of-file and error indicators are cleared.fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffkj

                The function drops any effects from previous calls to ungetc. */
                while (fread(&Employee,sizeOfEmployeeRecord,1,employeeFile)==1)
                {
                    if(strcmp(Employee.Employee_Name, Employee_Name) ==1)
                    {
                        Is_MATCH =true;
                        printf("\n%s has been found\n",&Employee.Employee_Name);

                        printf("change EMployee 's name >");
                        fgets(Employee.Employee_Name,40,stdin);

                        printf("age>");
                        scanf("%d",&Employee.Employee_Age);
                        printf("designation>");
                        scanf("%39s",&Employee.Employee_Designation);
                        printf("salary?>");
                        scanf("%f",&Employee.Employee_Salary);
                        while(getchar()!= '\n');
                        fseek(employeeFile,-sizeOfEmployeeRecord,SEEK_CUR);
                        fwrite( &Employee, sizeOfEmployeeRecord,1,employeeFile);
                        break;


                    }
                };
                if (Is_MATCH )
                    {printf("\n%s has been modified!\n",&Employee.Employee_Name);}
                else
                    {printf("\n%s is NOT FOUND\n",&Employee_Name);}

                printf("\nWould you like to modify another record y/n?");
                //fflush(stdin);

                scanf(" %c", &nextChoice);
                while(getchar()!= '\n');

            }
            

            break;
        case '3':
            nextChoice = 'y';

            while(nextChoice=='y')
            {
                printf("Enter the Employee name to delete >");
                scanf("%39s", Employee_Name);
                employeeFileTemp = fopen("Temp.day","wb");
                rewind(employeeFile);

                while (fread(&Employee,sizeOfEmployeeRecord,1,employeeFile)==1)
                {
                    if(strcmp(Employee.Employee_Name, Employee_Name) !=0)
                    {
                        fwrite(&Employee,sizeOfEmployeeRecord,1,employeeFileTemp);
                    }
                };

                fclose(employeeFile);
                fclose(employeeFileTemp);

                remove("EMPLOYEE.DAT");
                rename("Temp.DAT","EMPLOYEE.DAT");
                fopen("EMPLOYEE.DAT","wb+");

                printf("\n%s has been deleted!\n",&Employee.Employee_Name);

                printf("\nWould you like to delete another record y/n?");
                //fflush(stdin);
                scanf(" %c", &nextChoice);
                while(getchar()!= '\n');
            } 

        
            break;
        case '4':
            fseek(employeeFile,0 ,SEEK_SET);


            while (fread(&Employee,sizeOfEmployeeRecord,1,employeeFile)==1)
            {
                printf("Employee Name: %s",Employee.Employee_Name);
                printf("Employee Age: %d",Employee.Employee_Age);
                printf("Employee Designation: %s",Employee.Employee_Designation);
                printf("Employee Salary: %f",Employee.Employee_Salary);
                printf("\n");

            };

            break;
        case '5':
            exit(0);
            break;




        default:
        printf("input ERROR!\n");
        
            break;
        }

        printf("=========\n");
    }

    getchar();
    return 0;
}