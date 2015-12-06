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
    int result;   
    
    //Poplulate addresses
    for (int i = 0; i < 5; ++i)
        addresses[i] = &test_v[i];
    
    //Test set_names and display
    for (int i= 0; i < 5; ++i)
    {
        result = test_v[i].set_name(name[i]);
        //cout << result << endl;
        //test_v[i].display();
    }
    
    //Test compare_name
    result = test_v[0].compare_name(name[0]);
    //cout << result << endl;
    result = test_v[0].compare_name(name[1]);
    //cout << result << endl;
    //cout << "\n\n";

    //Test add edge
    for (int i = 0; i < 4; ++i)
    {
        int j = (i % 5) + 1;

        result = test_v[0].add_edge(name[j], addresses[j]);
        //if (result)
            //cout << "\nAdd success" << endl;
        cout << endl;
        test_v[0].display();
        cout << endl;
    }

    
    cout << "The adjacency list is below:\n\n";
    for (int i = 0; i < 5; ++i)
    {
        test_v[i].display();
        cout << endl;
    }

    return 0;
}

















