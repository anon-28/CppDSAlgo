/*
* This repository contains the implementation of different datastructures
* and algorithms
*/

#include <iostream>
#include "Linked_lists.h"

int main()
{
    LinkedLists *pList = LinkedLists::get_object();
	
	// node insertion at beginning
    pList->insert_node_beginning(10);
    pList->insert_node_beginning(20);
    pList->insert_node_beginning(30);
    pList->insert_node_beginning(40);
	// print the complete list
    pList->print_linked_list();
	// clear out the list
    pList->clear_linked_list();
	// print back again
    pList->print_linked_list();
}
