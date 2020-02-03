#include <iostream>
#include <stdlib.h>

using namespace std;

// Code for singly-linked list
//TODO

// Node
struct Node{
	int data;
	struct Node *next;
};

// Insert new node at the front
void push(struct Node** head, int node_data)
{
// Create new node
	struct Node* newNode = new Node;
// Assign data to new node
	newNode->data = node_data;
// Set next of new node as head
	newNode->next = (*head);
// Move head to point at new node
	(*head) = newNode;
}

void insertAfer(struct NOde* prev_node, int node_data){
	if(prev_node == NULL){
		cout<<"the given node is required, cannot be NULL";
		return;
	}
	struct Node* newNode = new Node;
	newNode->data = node_data;
	newNode->next = prev_node->next;
	prev_node->next = newNode;
}
