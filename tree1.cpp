#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    
    Node *left;
    Node *right;

    Node(int val){
        data=val;
        left= NULL;
        right= NULL;
        
    }
    void preorder(Node* root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    //inorder
    void inorder(Node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    //postorder
    void postorder(Node* root){
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
};
int main(){
Node *root= new Node(1);
root-> left= new Node(2);
root-> right= new Node(3);
root->left->left= new Node(4);
root->left->right= new Node(5);
root->right->left= new Node(6);
root->right->right= new Node(7);
root->preorder(root);
cout<<endl;
}

