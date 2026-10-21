// for every node of left :node->left that node->data<root->data
// for every node of right: node->right that node->data>root->data
//BST condition
#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};
Node* insertintoBST(Node* root, int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d>root->data){
        //right part;
        root->right=insertintoBST(root->right,d);
    }
    else{
        //leftpart;
        root->left=insertintoBST(root->left,d);
    }
    return root;
}
void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertintoBST(root,data);
        cin>>data;
    }
}
void LevelOrderTraversal(Node* root){
    if(root==NULL) return ;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
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
Node* minVal(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
Node* deletionNode(Node* root, int val){
    if(root==NULL) return NULL;
    if(val==root->data){
        //WE HAVE 4 CASES
        //1. 0child;
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //2. child(left);
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //3. child(right);
        if(root->right!=NULL && root->left==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //4. both chilf(left and right);
        if(root->right!=NULL && root->left!=NULL){
            int mini=minVal(root->right)->data;
            root->data=mini;
            root->right=deletionNode(root->right,mini);
            return root;
        }
    }
    else if(val<root->data){
        root->left=deletionNode(root->left,val);
        return root;
    }
    else{
        root->right=deletionNode(root->right,val);
        return root;
    }

}
int main(){
    Node* root=NULL;
    cout<<"Enter data to crete BST"<<endl;
    takeinput(root);
    cout<<"Printing"<<endl;
    LevelOrderTraversal(root);
}
//10 5 21 -1
// INSERTION COM of BST: 0(log n)
// BST OF INORDER IS SORTED(point to br noted)
//Deletion 0(h) woO(n)