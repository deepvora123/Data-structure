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

void printList(Node *n)
{
    while (n!= NULL)
    {
        cout<< n->data;
        n = n->next;
    }

}

bool hasLoop(Node* head){
    if (head==NULL)
        return  false;

    Node* slow = head->next;
    Node* fast = head->next->next;

    while(fast != slow){
        if (fast == NULL || fast->next == NULL)
        {
            return false;
        }
        fast= fast->next->next;
        slow= slow->next;
        
    }
    return true;
}
/*
void removeLoop(Node* head){
if (head==NULL)
        return  false;

    Node* slow = head->next;
    Node* fast = head->next->next;


    while(fast != slow){
        if (fast == NULL || fast->next == NULL)
        {
            return false;
        }
        fast= fast->next->next;
        slow= slow->next;
    }
    slow = head;
    while (slow!=fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    //fast->next = NULL;



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

    head->next->next->next->next->next = head->next; 
    if (detectLoop(head))
        cout << "Loop Found\n";
    else 
        cout << "Loop Not Found\n"; 
  

    removeLoop(head);

    if (detectLoop(head))
        cout << "Loop Found\n";
    else 
        cout << "Loop Not Found\n"; 
  

    printList(head);
    return 0; 
}


