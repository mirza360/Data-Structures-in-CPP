#include "stdafx.h"
//#include "Node.h"
#include<iostream>

using namespace std;
struct Node
{
	int value;
	
	Node *next=NULL;

	void printNode(Node *head) {
		Node*idx=head;
		while (idx != NULL) {
			cout << idx->value << " ";
			idx = idx->next;
		}
		cout << endl;
	}
	void addNodeToEnd(Node *n, Node* head) {
		if (head->next == NULL) {
			head->next = n;
		}
		else {
			Node *idx = head;
			while (idx->next != NULL) {
				idx = idx->next;
			}
			idx->next = n;
		}
	}

};
//Node*head = NULL;