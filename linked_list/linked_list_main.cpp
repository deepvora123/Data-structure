#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    struct Node(int data){
        this->data= data;
        this->next= NULL;
    }
};

int getSize(Node* head)
{
    Node *temp= head;
    int lenght = 0;
    while(temp!= NULL)
        temp = temp->next;
        lenght++;
}
//main logic of code
int getNthfromEnd(Node* head, int n){
    
    int size = getSize(head);
    //corner case
    if (n>size){
        return -1;
    }

    Node* first = head;
    Node * second = head;
    while (n--)
        first = first->next;
    while(first!= NULL){
        first = first->fist->next;
        second = second->next;
    }
    return second->data;




    //corner case
    if(head==NULL)
        return -1;
    if (head->next == NULL)

}

int main(){
int n =2;
Node* head = NULL;
head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);
head->next->next->next = new Node(4);
head->next->next->next->next = new Node(5);
cout<< getNthfromEnd(head,n) << endl;
return 0;
}





























