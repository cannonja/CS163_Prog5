//Jack Cannon
//CS 163
//Program 5
//graph_functions.cpp
//
//This file contains the implementations for the methods of the tree class

#include "prog5.h"


//This function takes a char pointer by reference, promtps the user
//for input, and returns a c-string and the number of days
int read_info(char from_name[], char to_name[], char * & event_name)
{
    char temp[20];
    int days;

    cout << "How is " << from_name << " connected to " << to_name << "?  Enter an event: ";
    cin.get(temp, 19, '\n');
    cin.ignore(100, '\n');

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

//This function initiates the process of adding an edge
//The first argument is a person and the second argument
//is a friend to be connected to
int graph::add_connection(char from[], char to[])
{
    int from_index = -1, to_index = -1;

    for (int i = 0; i < list_size; ++i)
    {
        if (adj_list[i].compare_name(from))
            from_index = i;
        if (adj_list[i].compare_name(to))
            to_index = i;
    }

    if (from_index < 0 || to_index < 0)
        return 0;

    return adj_list[from_index].add_edge(to, &adj_list[to_index]);

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

//This function takes a name and compares it to the
//name of the vertex.  Returns 1 or 0
int vertex::compare_name(char to_compare[])
{
    if (strcmp(friend_name, to_compare) == 0)
        return 1;
    return 0;
}






//Wrapper for add_edge
int vertex::add_edge(char to[], vertex * to_addr)
{
    return add_edge(to, to_addr, head);
}

//This function takes a c-string, a pointer to a vertex, and a pointer to
//a LLL, then adds an edge to the adjacency list
int vertex::add_edge(char to[], vertex * to_addr, node * head)
{
    char * event_name;
    
    if (!head)
        return 0;

    if (!head -> next)
    {
        head -> next = new node;
        tail = head -> next;
        head -> next -> adjacent = to_addr; 
        head -> next -> num_days = read_info(friend_name, to, event_name);
        strcpy(head -> next -> event, event_name);
        head -> next -> next = NULL;
        
        return 1;
    }

    return add_edge(to, to_addr, head -> next);
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
























































    











