#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void printlist(Node* node) { 
    while (node != NULL) { 
        cout << node->data << " "; 
        node = node->next; 
    }
    cout << endl;
}

void reverselist(Node** head){


    Node* temp = NULL;
    Node* temp1= *head;
    Node* temp2= NULL;
    while(temp1!=NULL){
        //changing links
        temp2=temp1->next;
        temp1->next=temp;
        
        //incrementing pointer
        temp=temp1;
        temp1 = temp2;

    }
    *head=temp;


}
/*
void printreverse(Node* head){
    if(head == NULL){
        return;
    }
    printreverse(head->next)
    cout<<head->data;
}
*/
int main(){

    int n = 2;
    Node* head = NULL;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    printlist(head);
    reverselist(&head);
    printlist(head);
    return 0;
}