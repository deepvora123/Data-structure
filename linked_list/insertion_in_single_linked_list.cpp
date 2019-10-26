#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node *next;
}

int insertafter(Node *previous_node,int new_data){
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = previous_node->next;
    previous_node->next = new_node;
    }


int main()
{
    Node *head =Node;


    insertafter(n2,5);






    return 0;
}