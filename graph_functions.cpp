//Jack Cannon
//CS 163
//Program 5
//graph_functions.cpp
//
//This file contains the implementations for the methods of the tree class

#include "prog5.h"

//Constructor
graph::graph(int size)
{
    list_size = size;
    adj_list = new vertex[list_size];
}

//Destructor
graph::~graph()
{
    int result;

    for (int i = 0; i < list_size; ++i)
        result = adj_list[i].destroy_wrapper();

    delete [] adj_list;
    adj_list = NULL;
    list_size = 0;
}


//Constructor
vertex::vertex()
{
    event_name = NULL;
    head = NULL;
    tail = NULL;
}


//Destructor
vertex::~vertex()
{
    int result;
        
    delete [] event_name;
    result = destroy_wrapper();
    head = NULL;
    tail = NULL;
}


//Wrapper for vertex::destroy_edges
int vertex::destroy_wrapper()
{
    return destroy_edges(head);
}


//This function takes a pointer to a node and destroys
//the LLL recursively
int vertex::destroy_edges(node * head)
{
    if (!head)
        return 0;
    
    if (!head -> next)
    {
        delete head -> next;
        head -> next = NULL;
        return 1;
    }

    return destroy_edges(head -> next);
}


























































    











