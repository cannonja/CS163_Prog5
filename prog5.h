//Jack Cannon
//CS 163
//Program 5
//prog5.h
//
//This file contains the prototypes and definitions for the classes, structs
//and methods used in the ADTs

#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>

using namespace std;

//Struct representing nodes in edge list
struct node
{
    vertex * adjacent;
    node * next;
};


struct vertex
{
    char * event_name;
    node * head;
    node * tail;
};



class graph
{
    public:
        graph(int size);
        ~graph();
        int add_edge(node * to_add);


    private:
        vertex * adj_list;
};




















