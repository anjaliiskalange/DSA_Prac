#include <iostream>
#include <map>
#include <vector>
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

//REVERSE A LINKED LIST
//APPROACH 1
//TIME COMPLEXITY O(N)
//SC O(1)
//if we cut the connection of head we will lose the rest of the
//list. So we get a pointer on head namely forward
void reverseList(Node* &head){

    if(head==NULL || head->next==NULL){
        cout<<head<<endl;
    }

    Node* prev = NULL;
    Node* curr= head;
    Node* forward= curr->next;

    while(curr!=NULL){
        forward= curr-> next;
        curr->next=prev;
        prev= curr;
        curr= forward;
    }

    cout<<prev<<endl;

}

//APPROACH 2
//RECURRsiVE
void reverse(Node* &head, Node* curr, Node* prev){
    if(curr==NULL){
        head=prev;
        return;
    }

    Node* forward= curr->next;
    reverse(head,forward,curr);
    curr->next=prev;
}

Node* reverseLL(Node* head){
    Node* curr= head;
    Node* prev = NULL;
    reverse(head, curr, prev);
}

int getLength(Node* head){
    int len=0;
    while(head!=0){
        len++;
        head= head->next;
    }
    return len;
}
//MIDDLE OF A LINKED LIST
//TC O(n) - not optimized
Node* middleelement(Node* head){
    int len = getLength(head);
    int ans = (len/2);

    Node* temp = head;
    int cnt= 0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}

//optimized
//TC O(n)
Node* middle(Node* head){
    if( head==NULL || head-> next==NULL){
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }
    //algo
    Node* slow= head;
    Node* fast = head->next;
    while(fast!=NULL){
        fast= fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}

//REVERSE IN GROUPS OF K
//RECURRSION
Node* reverseK(Node* head, int k){
    //base case
    if(head==NULL){
        return NULL;
    }
    //reverse 1st k nodes
    Node* curr= head;
    Node* prev = NULL;
    Node* next = NULL;
    int count = 0;

    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next=prev;
        prev= curr;
        curr=next;
        count++;
    }

    //recurrsion
    if(next!=NULL){
        head-> next=reverseK(next,k);
    }  
    return prev;
}


    //circulary ll
bool circular( Node* head){
        //empty list
        if(head==NULL){
            return 1;
        }

        Node* temp = head-> next;
        while(temp!=NULL && temp !=head){
            temp = temp-> next;
        }

        if( temp==head){
            return 1;
        }
        else{
            return 0;
        }
    } 

//detect loop
bool detectLoop( Node* head){
        if (head== NULL){
            return false;
        }

        map <Node*, bool> visited;
        Node* temp =head; 
        while(temp!=NULL){
            if(visited[temp]==true){
                return 1;
            }
            visited[temp]= true;
            temp = temp-> next;
        }
        return false;
}

//FLOYD'S ALGORITHM
//taking slow and fast
Node* Flyod(Node* head){
    if(head=NULL){
        return 0;
    }

    Node* slow= head;
    Node* fast = head;
    
    while(fast!=NULL && slow!=NULL){
        fast= fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

//get starting node
//using floyd's algo
Node* getStart(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* intersection= Flyod(head);
    Node* slow= head;

    while(slow!= intersection){
        slow=slow-> next;
        intersection= intersection-> next;
    }
    return slow;
}

//REMOVING A LOOP IN LINKED LIST
Node* removeLoop(Node* head){
    if(head= NULL){
        return NULL;
    }

    Node* start= getStart(head);
    Node* temp = start;
    while(temp-> next != start){
        temp=temp->next;
    }
    temp->next= NULL;
}

//REMOVE DUPLICATES FROM SORTED LIST
Node* duplicatesSorted(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* curr= head;
    while(curr!=NULL){
        if((curr->next !=NULL) && curr->data == curr->next->data){
            Node* next_next= curr->next->next;
            Node* nodetodelete= curr->next;
            delete(nodetodelete);
            curr->next= next_next;
        }
        else{
            curr= curr->next;
        }
        
    }
    return head;
}

//REMOVE DUPLICATES FROM UNSORTED LIST
Node* duplicatesUnsorted( Node* head){
    if( head=NULL){
        return NULL;
    }

    Node* curr= head;
    while(curr!=NULL){
        Node* temp=curr->next;
        while(temp!=NULL){
            if(curr->data == temp->data){
                Node* nodetodelete= temp;
                delete(nodetodelete);
                temp=temp->next;
            }
        }
    }
}

//SORTING 0s 1s 2s IN A LIST
Node* sortingBrute( Node* head){
    int countzero=0, countone=0,counttwo=0;

    Node* temp=head;
    while(temp!=head){
        if(temp->data == 0){
            countzero++;
        }
        else if(temp->data == 1){
            countone++;
        }
        else if(temp->data == 2){
            counttwo++;
        }
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL){
        if(countzero !=0){
            temp->data=0;
            countzero--;
        }
        else if(countzero !=1){
            temp->data=1;
            countone--;
        }
        else if(counttwo !=2){
            temp->data=2;
            counttwo--;
        }
        temp=temp->next;
    }
    return head;

}

//APPROACH #2
Node* sortapproach(Node* head){
    Node* zeroHead= new Node(-1);
    Node* zeroTail= zeroHead;
    Node* oneHead= new Node(-1);
    Node* oneTail= zeroHead;
    Node* twoHead= new Node(-1);
    Node* twoTail= zeroHead;

    //getting the individual lists
    Node* curr = head;
    while(curr!=NULL){
        int value = curr -> data;

        if(value==0){
            insertAtTail1(zeroTail,curr);
        }
        else if(value==1){
            insertAtTail1(oneTail,curr);
        }
        else if(value==2){
            insertAtTail1(twoTail,curr);
        }
        curr=curr->next;
    }

    //MERGING THE LISTS
    if( oneHead->next !=NULL){
        zeroTail->next=oneHead->next;
    }
    else{
        zeroTail->next= twoHead->next;
    }

    oneTail->next= twoHead->next;
    twoTail->next=NULL;

    //setup head
    head= zeroHead->next;

    //delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;

}

void insertAtTail1(Node* &tail, Node* curr){
    tail->next=curr;
    tail=curr;
}

//MERGING TWO SORTED LISTS
Node* solve( Node* first, Node* second){
    
    //if ONLY 1 ELEMENT PRESENT
    if( first->next==NULL){
        first->next= second;
        return first; 
    }


    Node* curr1=first;
    Node* next1= curr1->next;
    Node* curr2= second;
    Node* next2 = curr2->next;

    while(next1!=NULL && curr2!=NULL){
        if((curr2->data >= curr1-> data) &&( curr2->data <=next1->data)){
            curr1->next=curr2;  
            next2= curr2->next;
            curr2->next=next1;
            curr1=curr2;
            curr2=next2;
        }
        else{
            curr1=next1;
            next1=next1->next;

            if(next1==NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;

}

Node* mergeSorted( Node* first, Node* second){

    if( first==NULL){
        return second;
    }
    if( second =NULL){
        return first;
    }

    if(first->data <= second->data){
        solve (first,second);
    }
    else{
        solve( second, first);
    }
}

//PALLINDROME OF LINKED LISTS
//APPROACH #1
bool check(vector<int> arr){
    int n = arr.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        if(arr[s]!= arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

bool checkPallindrome(Node* head){
    vector<int> arr;

    Node* temp = head;
    while( temp!=NULL){
        arr.push_back(temp->data);
        temp=temp-> next;
    } 
    return check(arr);
}

//APPROACH #2
Node* getMid( Node* head){
    Node* slow= head;
     Node* fast = head;

     while( fast!=NULL){
        fast = fast-> next->next;
        slow= slow->next;
     }
    return slow;
}

Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

bool pallindrome2(Node* head){
    if( head->next ==NULL){
        return true;
    }

    Node* middle = getMid(head);

    Node* temp = middle->next;
    middle->next= reverse(temp);

    //compare both halves
    Node* head1= head;
    Node* head2=middle->next;
    while(head2!=NULL){
        if(head1->data !=head2->data){
            return false;
        }
        head1=head1->next;
        head2= head2-> next;
    }

    temp = middle->next;
    middle->next= reverse(temp);


    return true;
}

//ADD TWO NUMBERS REPRESENTED BY LINKED LIST
Node* insertAtTail2(Node* head, Node* tail, int val){
    Node* temp = new Node(val);
    if(head==NULL){
         head= temp;
         tail=temp;
         return;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

Node* add(Node* first, Node* second){
    int carry =0;
    Node* anshead=NULL;
    Node* anstail=NULL;

    while(first!=NULL || second!=NULL || carry !=0){
        // int sum = carry + first-> data + second-> data;
        // int digit = sum%10;
        // Node* temp = new Node(digit);
        // insertAtTail2(anshead,anstail,digit);
        // carry= sum/10;

        int val1=0;
        if(first!=NULL){
            val1=first-> data;
        }
        int val2=0;
        if(second!=NULL){
            val2=second->data;
        }

        int sum= carry + val1+ val2;
        int digit = sum%10;
        insertAtTail2(anshead,anstail,digit);

        carry=sum/10;
        if(first!=NULL){
            first=first-> next;
        }
        if(second!=NULL){
            second=second->next;
        }
    }
}

Node* addTwoLists(Node* first, Node* second){
    //step 1- reverse
    first = reverse(first);
    second = reverse(second);

    //step 2 - add two linked list
    Node* ans= add(first, second);

    ans= reverse(ans);

}

//CLONE A LINKED LIST WITH RANDOM POINTERS
Node* insertAtTail3( Node* &head, Node* &tail, int d){
    Node* newNode= new Node(d);
    if(head==NULL){
        head= newNode;
        tail=newNode;
        return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }

}

Node* clone1( Node* head){
    //step 1 create a clone list
    Node* random = new Node(10);
    Node* cloneHead= NULL;
    Node* cloneTail= NULL;

    Node* temp=head;

    while( temp!=NULL){
        insertAtTail3(cloneHead,cloneTail,temp->data);
        temp= temp-> next;
    }

    //step 2 create a map
    map <Node*,Node*> oldToNewNode;

    Node* original=head;
    Node* clone=cloneHead;
    while(original!=NULL && clone!=NULL){
        oldToNewNode[original]=clone;
        original= original->next;
        clone=clone->next;
    }
    original= head;
    clone = cloneHead;

    while(original!=NULL){
        //clone->random = oldToNewNode[original->random];
        original=original->next;
        clone=clone->next;
    }

    return cloneHead;

}

//APPROACH 2
Node* clone2( Node* head){
    //step1 create a clone list
    Node* cloneHead=NULL;
    Node* cloneTail=NULL;

    Node* temp = head;
    while(temp!=NULL){
        insertAtTail3(cloneHead,cloneTail,temp-> data);
        temp= temp->next;
    }

    //step2 clonenode add in between
    Node* orignalNode=head;
    Node* cloneNode= cloneHead;
    while(orignalNode!=NULL && cloneNode!=NULL){
        Node* next = orignalNode-> next;
        orignalNode->next=cloneNode;
        orignalNode=next;

        next=cloneNode->next;
        cloneNode->next=orignalNode;
        cloneNode= next;
    }

    //step3 random pointer copy
    temp=head;
    while(temp!=NULL){
        if(temp->next!=NULL){
            //temp->next->random = temp->random ? temp->random->next : temp->random;
        }
        temp=temp->next->next;
    }

    //step4 revert changes in step 2
    orignalNode= head;
    cloneNode=head;
    while(orignalNode!=NULL && cloneNode!=NULL){
        orignalNode->next = cloneNode->next;
        orignalNode=orignalNode->next;

        if(orignalNode!=NULL){
            cloneNode-> next= orignalNode-> next;
        }
        cloneNode=cloneNode->next;
    }

    //step5 return ans
    return cloneHead;
}

//Merge sort in linked list
Node* merge(Node* left,Node* right){
    if(left==NULL){
        return right;
    }
    if(right=NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp= ans;

    while(left!=NULL && right !=NULL){
        if(left->data < right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }

    while(left!=NULL){
        temp->next=left;
        temp=left;
        left=left->next;
    }

    while(right!=NULL){
        temp->next=right;
        temp=right;
        right=right->next;
    }

    ans =ans->next;
    return ans;
}

Node* mergeSort(Node* head){
    if(head==NULL || head-> next==NULL){
        return head;
    }

    Node* mid= getMid(head);
    Node* left= head;
    Node* right = mid->next;
    mid->next=NULL;

    left= mergeSort(left);
    right=mergeSort(right);

    Node* res= merge(left,right);

    return res;

}

int main (){

    Node* node1= new Node(10);
    Node* head= node1;
    
    return 0;
}