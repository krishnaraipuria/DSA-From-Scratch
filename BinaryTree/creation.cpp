#include <iostream>
#include <queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left "<< data <<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data for inserting in right "<< data <<endl;
    root->right=buildtree(root->right);
    return root;
}

void LevelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){ //level complete
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    }
}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void Preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(node* root){
    if(root==NULL){
        return ;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
void buildfromlevelorder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        cout<<"Enter left node for:"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right node for:"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main(){
    node* root=NULL;
    // buildfromlevelorder(root);
    // LevelOrderTraversal(root);
    root = buildtree(root);

    LevelOrderTraversal(root);
    cout<<"Inorder: ";
    inorder(root);
    cout<<"Preorder: ";
    Preorder(root);
    cout<<"Postorder: ";
    Postorder(root);
}
// Inorder LNR
// preorder NLR
// postorder LRN
//    1
//  3    5
// 7 11 17
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1


// for the buildfromlevelorder
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
// hum 