//Jack Cannon
//CS 163
//Program 5
//prog5.cpp
//
//This file contains the main program for program 4




#include "prog5.h"


int main()
{
    //Test read_info=======================================================
    /*
    char person[10] = "Jonny";
    char person2[10] = "Jane";
    char * event;
    int days;

    days = read_info(person, person2, event);
    cout << "Num days = " << days << endl;
    cout << "Event = " << event << endl;
    */

    //Test vertex class==========================================================
    vertex test_v, test_v2;
    char name[20] = "Jonny";
    char name2[20] = "Jane";

    cout << test_v.set_name(name) << endl;
    test_v.display();
    cout << test_v.compare_name(name) << endl;
    cout << test_v.compare_name(name2) << endl;
    cout << "\n\n\n\n";

    cout << test_v.add_edge(name2, &test_v2) << endl;
    cout << "Success" << endl;
    
    return 0;
}

















