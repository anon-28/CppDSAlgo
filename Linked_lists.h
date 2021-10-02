#pragma once
#include <cstddef>
#include <iostream>

typedef struct Node
{
	int data;
	struct Node* next;
} Node;

class LinkedLists
{
	// Head node of the linked list
	Node* head = nullptr;
	static LinkedLists *singleton_object;

	LinkedLists()
	{}

public:
	/// <summary>
	/// This function shall return a singleton object of this class
	/// </summary>
	/// <returns></returns>
	static LinkedLists* get_object();

	/// <summary>
	/// This function shall be used to insert a node at the beginning of the list.
	/// </summary>
	void insert_node_beginning(int data);

	/// <summary>
	/// This function shall be used to insert a node at the end of the list.
	/// </summary>
	void insert_node_end(int data);

	/// <summary>
	/// This function shall be used to insert a node in the middle of the list.
	/// </summary>
	void insert_node_middle(int data);

	/// <summary>
	/// This function shall be used to print the linked list.
	/// </summary>
	void print_linked_list();

	/// <summary>
	/// This fucntion shall clear the linked list
	/// </summary>
	void clear_linked_list();
};

