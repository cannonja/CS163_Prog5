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
    vertex test_v[5];//Declare 5 test vertices
    vertex * addresses[5];
    char name[5][15] = {"Jonny", "Jane", "Dick", "Harry", "Darlene"};//Names
    
    
    //Poplulate addresses
    for (int i = 0; i < 5; ++i)
        addresses[i] = &test_v[i];
    
    //Set names and display
    for (int i = 0; i < 5; ++i)
    {
        //Test set_name
        cout << test_v[i].set_name(name[i]) << endl;
        //Test display
        test_v[i].display();
    }
    
    //Test compare_name
    cout << test_v[0].compare_name(name[0]) << endl;
    cout << test_v[0].compare_name(name[1]) << endl;
    cout << "\n\n";

    //Test add edge
    if (test_v[0].add_edge(name[1], addresses[1]))
        cout << "Add success" << endl;
    test_v[0].display();

    return 0;
}

















