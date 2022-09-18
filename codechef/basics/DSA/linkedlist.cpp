#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value= this-> data;
        if(this->next!=NULL){
            delete next;
            this-> next= NULL;
        }
        cout<<"memory is free"<<value<<endl;
    }

};

void insertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &head, int position, int d){
    Node* temp=new Node(d);
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    Node* nodetoInsert= new Node(d);
    nodetoInsert->next= temp->next;
    temp->next=nodetoInsert;
}

void deletePosition(int position , Node* & head){
    if(position==1){
        Node* temp=head;
        head=head-> next;
        temp-> next=NULL;
        delete temp;
    }
    else{
        Node* cur=head;
        Node* prev= NULL;

        int cnt=1;
        while (cnt<=position)
        {
            prev=cur;
            cur=cur->next;
            cnt++;
        }
        
        prev->next=cur->next;
        cur-> next=NULL;
        delete cur;
    }

}

void printLL(Node* &head){
    Node* temp= head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

int main(){
    Node* node1 = new Node(10);
    cout<< node1 ->data<<endl;
    cout<<node1->next<<endl;

    Node* head= node1;
    Node* tail=node1;
    printLL(head);

    insertAtTail(tail,12);
    printLL(head);

    return 0;
}