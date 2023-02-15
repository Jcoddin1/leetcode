#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next ;

        Node(){
            data = 0;
            next = NULL;
        }

        Noe(int data){
            this->data = data;
            this->next = NULL;
        }

};

class Linkedlist{
    Node* head;

    public:
        Linkedlist(){
            head = NULL;
        }
        void insertNode(int);
        void printList();
        void deleteNode(int);
}

void Linkedlist::deleteNode(int nodeOffset){
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;
    if(head==NULL){
        return;
        // List is empty
    }
    
}