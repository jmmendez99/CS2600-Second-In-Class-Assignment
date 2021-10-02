//Compile using the following commands: 
//gcc employeeMain.c employeeTable.c employeeTwo.c 

#include<stdlib.h>
#include<string.h>
#include "employee.h"

int main(void){
    //defined in employeeTwo.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int tableSize, double salaryToFind);

    //defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; //Declaration
    

    //Employee ID
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    if(matchPtr != NULL){
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable);
    }
    else{
        printf("Employee ID 1045 is NOT found in the record\n");
    }

    //Employee Name
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL){
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    }
    else{
        printf("Employee Tony Bobcat is NOT found in the record\n");
    }

    //Employee Phone Number
        //Found
        matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-2134");
        if(matchPtr != NULL){
            printf("Employee Phone 909-555-2134 is in record %d\n", matchPtr - EmployeeTable);
        }
        else{
         printf("Employee Phone 909-555-2134 is NOT found in the record\n");
        }  

        //Not Found
        matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-421-2134");
        if(matchPtr != NULL){
             printf("Employee Phone 909-421-2134 is in record %d\n", matchPtr - EmployeeTable);
         }
        else{
            printf("Employee Phone 909-421-2134 is NOT found in the record\n");
        }

    //Employee Salary
        //Found
        matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.32);
        if(matchPtr != NULL){
             printf("Employee with salary of 8.32 is in record %d\n", matchPtr - EmployeeTable);
        }
        else{
             printf("Employee with salary of 8.32 is NOT found in the record\n");
        }

        //Not Found
        matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.01);
        if(matchPtr != NULL){
            printf("Employee with salary of 8.01 is in record %d\n", matchPtr - EmployeeTable);
        }
         else{
            printf("Employee with salary of 8.01 is NOT found in the record\n");
        }
    
    return EXIT_SUCCESS;
}
