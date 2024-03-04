#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(int arr1[],int size){
    Node* head= new Node(arr1[0]);
    Node* mover=head;
    for(int i=1;i<size;i++){
        Node* temp= new Node(arr1[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void sort(Node* h1){
    Node* mover=h1;
    Node* next_el=mover->next;
    while(mover!=nullptr || next_el!=nullptr){
        while((mover->data)>(next_el->data)){
            int temp;
            temp=next_el->data;
            next_el->data=mover->data;
            mover->data=temp;
            mover=mover->next;
            next_el=next_el->next;
        }
        while(mover->data <= next_el->data){
            mover=mover->next;
            next_el=next_el->next;
        }
    }
}

int main(){
    int arr[8]={2,5,3,8,1,7,12,9};
    Node*y = new Node(arr[0],nullptr);
    cout<<y->data<<"\n";

    Node* head=convertArr2LL(arr,8);
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
    sort(head);
    Node* temp1=head;
    while(temp1!=nullptr){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    return 0;
}