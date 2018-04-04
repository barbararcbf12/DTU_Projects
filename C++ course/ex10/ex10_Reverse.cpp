// Doubly-linked list
#include <iostream>
#include <string>
#include "doubly-linked.h"

using namespace std;

// Constructor
List::List(void){
    first = nullptr;
}

// Destructor
List::~List(void){}

// This should insert n in the list
void List::insert(int n){
    Node * p = new Node;
    p->val = n;
    p->next = nullptr;
    
    if ( first == nullptr ){
        p->prev = nullptr;
        first = p;
    }
    
    else{
        
        Node * w = new Node;
        w = first;
        
        while( w->next != nullptr ){
            w = w->next;
        }
        
        w->next = p;
        p->prev = w;
        
    }
}


// This should reverse the list
void List::reverse(void){
    
    if(first == NULL) return;
    
    Node *prev = NULL, *current = NULL, *next = NULL;
    
    current = first;
    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    // now let the first point at the last node (prev)
    first = prev;
    
}

void List::print(void){
    for(Node * q = first; q != nullptr; q = q->next){
        cout << q->val << " ";
    }
    cout << endl;
}
