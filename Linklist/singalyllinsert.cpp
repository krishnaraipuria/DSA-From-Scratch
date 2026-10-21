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
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for data"<<value<<endl;
    }
};
void deletrNode(Node* &head, int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
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
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void inseratposition(Node* &tail,Node* &head, int position,int d){
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
        insertattail(tail,d);
        return ;
    }
    Node* nodetoinsert= new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
}
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
void insertatmiddle(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return ;
    }
    Node* nodetoinseert=new Node(d);
    nodetoinseert->next=temp->next;
    temp->next=nodetoinseert;
}
int main(){
    Node* node1=new Node(10);
    // cout<< node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    insertattail(tail,12);
    insertattail(tail,15);
    insertatmiddle(tail,head,4,22);

    print(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    deletrNode(head,3);
        print(head);

}
//insert at start
// insert at end
// insert at middle
// insert at any positio
//tranverse
//deletion