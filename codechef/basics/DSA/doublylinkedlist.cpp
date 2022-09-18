#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this-> data= d;
        this-> prev = NULL;
        this-> next = NULL;
    }
    ~Node(){
        int val= this->data;
        if(next!=NULL){
            delete next;
            next= NULL;
        }
        cout<<" memory free "<<val<<endl;
    }
};

//TRAVERSE

void print( Node* head){
    Node* temp =head;

    while(temp !=NULL){
        cout<< temp->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
}

//LENGTH OF LIST
int nodelength(Node* head){
    int length=0;
    Node* temp =head;

    while(temp !=NULL){
        length++;
        temp =temp->next;
    }
    return length;

}

//INSERT AT HEAD
void insertAtHead(Node* &head, int d){

    if( head==NULL){
        Node* temp= new Node(d);
        head = temp;
    }
    else{
        Node* temp= new Node(d);
        temp-> next=head;
        head-> prev = temp;
        head = temp;
    }

   

}

//INSERT AT TAIL
void insertAtTail(Node* &tail, int d){
    Node* temp =new Node(d);

    tail-> next= temp;
    temp-> prev = tail;
    tail=temp;
}


//INSERT AT POSITION 
void insertAtPosition(Node* &tail, Node* &head, int position , int d){

    //at head
    if(position==1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt =1;
    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    }

    //at last
    if(temp-> next== NULL){
        insertAtTail(tail,d);
        return;
    }

    //creating a node for d
    Node* nodetoinsert= new Node(d);

    nodetoinsert->next= temp->next;
    temp->next->prev= nodetoinsert;
    temp->next= nodetoinsert;
    nodetoinsert->prev= temp;

}

//DELETE NODE
void deletePosition(int position, Node* &head){
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head = temp-> next;
        temp->next=NULL;
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
        
        cur-> prev= NULL;
        prev->next=cur->next;
        cur-> next=NULL;
        delete cur;
    }
}


int main(){

    Node* node1= new Node(10);
    Node* head = node1;
    Node* tail = node1;
    //print (head);
    //cout<<nodelength(head)<<endl;

    insertAtHead(head,11);
    insertAtHead(head,12);
    insertAtHead(head,13);
    // print(head);

    insertAtTail(tail,7);
    insertAtPosition(tail,head,2,100);
    print (head);
    deletePosition(3,head);
    print(head);

    return 0;

}