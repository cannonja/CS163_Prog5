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
    class vertex * adjacent;
    node * next;
};


class vertex
{
    public:
        vertex();
        ~vertex();
        int add_edge(char friend_name[]);
        int destroy_wrapper();

    private:   
        char * event_name;
        node * head;
        node * tail;
        int destroy_edges(node * head);
};



class graph
{
    public:
        graph(int size);
        ~graph();
        //int add_edge(node * to_add);
        int display_path(char friend_name[]);
        //int destroy_edges(node * head);

    private:
        int list_size; 
        vertex * adj_list;
};




















