#include <iostream>
#include "doubly-linked.h"

using namespace std;

// Constructor
List::List(){
	first = nullptr;
}

// recursive function to erase all elements in a linked list
void eraseR(Node * p){
    // if the list is empty stop
    if (p == nullptr) {
    		return;
    }
    // otherwise we delete recursively
    else{
    		eraseR(p->next);
        // delete the node
    		//cout << "deleting " << p->val << "\n";
        delete p;
    }
}


// Destructor
List::~List(){
	eraseR(first);
	first=nullptr;
}

void insertRec(Node * current, Node * newNode){
	if(current->next==nullptr){
		//If current is the last element:
		//	Append at the end of the list
		current->next=newNode;
		newNode->prev=current;
	}
	else{
		//Otherwise
		//	Search for last element of the list
		insertRec(current->next,newNode);
	}
}

void insertIter(Node* current,Node * newNode){
	//Search for last element of the list
	while (current -> next != nullptr){
		current = current -> next;
	}
	//Append at the end of the list
	newNode->prev = current;
	current->next=newNode;
}

void List::insert(int n){
	Node* newNode;
	newNode = new Node;
	newNode->val=n;
	newNode->next=nullptr;
	newNode->prev=nullptr;
	if(first == nullptr){
		first = newNode;
	}
	else {
		insertIter(first,newNode);
		//insertRec(first,newNode);
	}
}

/**
 * This function reverses the list, and returns a pointer to its originally last element
 */
Node * reverseRec(Node* current){
	Node * tmp =current->next;
	current->next=current->prev;
	current->prev=tmp;

	Node * whatWasNext = current->prev;
	if(whatWasNext==nullptr){
		//If current was the last element, return it.
		return current;
	}
	else{
		//Otherwise reverse the pointers of the next node
		return reverseRec(whatWasNext);
	}
}

/**
 * This function reverses the list, and returns a pointer to its originally last element
 */
Node * reverseIter(Node * current){
	Node* last = nullptr;
	while(current!=nullptr){
		if(current->next==nullptr){
			//If current is the last element of the list, point it using 'last'
			last=current;
		}
		//Swap the pointers of current
		Node * tmp =current->next;
		current->next=current->prev;
		current->prev=tmp;

		//Go to the 'next' node. We use prev because we swapped the pointers of current
		current=current->prev;
	}
	//Return the last element of the list
	return last;
}

void List::reverse(){
	if(first==nullptr){
		return;
	}
	Node* current = first;
	//Node * last = reverseIter(current);
	Node * last = reverseRec(current);
	first=last;
    return;
}

void List::print(){
	Node* t = first;
	while(t!=nullptr){
		cout << t->val << " ";
		t=t->next;
	}
	cout << "\n";
}


