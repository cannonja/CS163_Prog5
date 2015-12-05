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

int read_info(char * & event_name);

//Struct representing nodes in edge list
struct node
{
    class vertex * adjacent;
    char * event;
    int num_days;
    node * next;
};


class vertex
{
    public:
        vertex();//done
        ~vertex();//done
        int set_name(char to_add[]);//done
        int add_edge();
        int destroy_edges();//done

    private:   
        char * friend_name;
        node * head;
        node * tail;
        int add_edge(node * head);
        int destroy_edges(node * head);//done
};



class graph
{
    public:
        graph(int size);//done
        ~graph();//done
        //int add_edge(node * to_add);
        int display_path(char event_name[]);
        //int destroy_edges(node * head);

    private:
        int list_size; 
        vertex * adj_list;
};




















