#include "Linked_lists.h"

LinkedLists* LinkedLists::singleton_object = nullptr;

LinkedLists* LinkedLists::get_object()
{
	if (singleton_object == nullptr)
	{
		singleton_object = new LinkedLists();
	}
	
	return singleton_object;
}

void LinkedLists::insert_node_beginning(int data)
{
	LinkedLists *pList = LinkedLists::get_object();

	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = nullptr;

	// This is the first node of the list being created
	if (pList->head == nullptr)
	{
		pList->head = new_node;
	}
	// Head of the list already exists
	else
	{
		new_node->next = pList->head;
		pList->head = new_node;
	}
}

void LinkedLists::insert_node_end(int data)
{
}

void LinkedLists::insert_node_middle(int data)
{
}

void LinkedLists::print_linked_list()
{
	Node* pTraverse = new Node();
	LinkedLists* pList = LinkedLists::get_object();

	if (pList->head != nullptr)
	{
		pTraverse = pList->head;
		while (pTraverse != nullptr)
		{
			std::cout << pTraverse->data << "-->";
			pTraverse = pTraverse->next;
		}
		std::cout << std::endl;
	}
	else
	{
		std::cout << "No List exists!" << std::endl;
	}
}

void LinkedLists::clear_linked_list()
{
	Node* pTraverse_current = new Node();
	Node* pTraverse_next = nullptr
		;
	LinkedLists* pList = LinkedLists::get_object();

	if (pList->head != nullptr)
	{
		pTraverse_current = pList->head;
		while (pTraverse_current != nullptr)
		{
			pTraverse_next = pTraverse_current->next;
			delete pTraverse_current;
			pTraverse_current = pTraverse_next;
		}

		pList->head = nullptr;
	}
	else
	{
		std::cout << "No List exists!" << std::endl;
	}
}
