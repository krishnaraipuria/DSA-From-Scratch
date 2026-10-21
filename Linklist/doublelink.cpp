#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
        Node(int d){
            this->data=d;
            this->prev=NULL;
            this->next=NULL;
        }
        ~Node(){
            int val=this->data;
            if(next!=NULL){
                delete next;
                next=NULL;
            }
        }
};
void insertathead(Node* & head,int d){
    Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getlen(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next; 
    }
    return count;
}
void inserattail(Node* & tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insertatposition(Node* & tail,Node* & head,int position,int d){
    if(position==1){
        insertathead(head,d);
        return ;
    }
    else{
        Node * temp=head;
    int cnt=1;
    while(cnt<=position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        inserattail(tail,d);
        return ;
    }
    Node* nodetoinsert= new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}
}
void deletrNode(Node* &head, int position){
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node*node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<<getlen(head)<<endl;
    insertathead(head,11);
    insertatposition(tail,head,2,100);
    print(head);
    deletrNode(head,2);
    print(head);
}