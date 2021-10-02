#include<string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber){
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++){     //serach until end of table
        if(ptr->number == targetNumber) //check if it equals the employee number
            return (PtrToEmployee) ptr;   //type cast prt to PtrToEmployee to make sure it isnt a constant and then return location of it number to callee
    }

    return NULL; //this will only happen if no employee number matches in the loop above
}

//Essentially the same functionality as above but comparing string to check if equal
PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char * targetName){
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++){     //serach until end of table
        if(strcmp(ptr->name, targetName) == 0) //check if it equals the employee number
            return (PtrToEmployee) ptr;   //return location of the number to callee
    }

    return NULL; //this will only happen if no employee name matches in the loop above
}