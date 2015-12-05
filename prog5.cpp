//Jack Cannon
//CS 163
//Program 5
//prog5.cpp
//
//This file contains the main program for program 4




#include "prog5.h"


int main()
{
    char person[10] = "Jonny";
    char person2[10] = "Jane";
    char * event;
    int days;

    days = read_info(person, person2, event);
    cout << "Num days = " << days << endl;
    cout << "Event = " << event << endl;
    

    return 0;
}

















