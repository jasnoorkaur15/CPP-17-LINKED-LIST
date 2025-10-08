//Jasnoor Kaur
//24070123049
//Batch: A2

#include <iostream>
using namespace std;

class Node{
    public : 
    int val;
    Node *next;

    // Constructor to initialize node
     Node(int data){
        val = data;
        next = NULL;
    }
   
};

int main(){
    Node*n = new Node(50);
    // Syntax of linked list 
    cout<<n->val<<" "<<n->next<<endl;
    return 0;
}

/*
OUUTPUT:
50 0
*/
