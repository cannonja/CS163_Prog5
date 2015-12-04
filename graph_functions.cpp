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
        result = destroy_edges(adj_list[i].head);

    delete [] adj_list;
    adj_list = NULL;
}

//This function takes a pointer to a node and destroys
//the LLL
int graph::destroy_edges(node * head)
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




























































    











