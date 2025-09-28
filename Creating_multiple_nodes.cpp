//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

class Node{
    public : 
    int val;
    Node *next;

    //Constructor to initialize node
    Node(int data){
        val = data;
        next = NULL;
    }
};

int main(){
    // Creating 3 nodes
    Node* n1 = new Node(10);
    Node* n2 = new Node(67);
    Node* n3 = new Node(14);

    //link nodes together
    n1->next = n2; // 1 --> 2
    n2->next = n3; // 2 --> 3
    //n3-> is null

    //Print linked list
    Node *temp = n1; //Start from head
    while(temp != NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

    return 0;
}

/*
OUTPUT: 
10 67 14 
*/
