//Jack Cannon
//CS 163
//Program 5
//graph_functions.cpp
//
//This file contains the implementations for the methods of the tree class

#include "prog5.h"


//This function takes a char pointer by reference, promtps the user
//for input, and returns a c-string and the number of days
int read_info(char * & event_name)
{
    char temp[20];
    int days;

    cout << "How are these friends connected?  Enter an event: ";
    cin.get(temp, 19, '\n');
    cin.ignore(100);

    event_name = new char[strlen(temp) + 1];
    strcpy(event_name, temp);

    cout << "How long ago was the event?  Enter the number of days: ";
    cin >> days;

    return days;
}

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
        result = adj_list[i].destroy_edges();

    delete [] adj_list;
    adj_list = NULL;
    list_size = 0;
}


//Constructor
vertex::vertex()
{
    friend_name = NULL;
    head = NULL;
    tail = NULL;
}


//Destructor
vertex::~vertex()
{
    int result;
        
    delete [] friend_name;
    result = destroy_edges();
    head = NULL;
    tail = NULL;
}

//This function takes a c-string and sets the name
//of the vertex
int vertex::set_name(char to_add[])
{
    if (!to_add)
        return 0;

    if (friend_name)
        delete [] friend_name;

    friend_name = new char[strlen(to_add) + 1];
    strcmp(friend_name, to_add);

    return 1;
}


//Wrapper for add_edge
int vertex::add_edge()
{
    return add_edge(head);
}

//This function takes a c-string and a pointer to a LLL
//and adds an edge to the adjacency list
int vertex::add_edge(node * head)
{
    char * event_name;
    
    if (!head)
        return 0;

    if (!head -> next)
    {
        head -> next = new node;
        tail = head -> next;
        /*Set pointer to point to respective vertex
        head -> next -> adjacent =  
        */
        head -> next -> num_days = read_info(event_name);
        strcpy(head -> next -> event, event_name);
        head -> next -> next = NULL;
        
        return 1;
    }

    return add_edge(head -> next);
}


//Wrapper for vertex::destroy_edges
int vertex::destroy_edges()
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
























































    











