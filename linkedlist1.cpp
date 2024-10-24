#include<iostream>
#include<vector>

using namespace std;
class Node{
    public:
    int data;
    Node* next;

};
int main(){
    Node* obj= new Node();
    cout<<obj -> data<<" ";
    cout<<obj -> next<<endl;
    return 0;
}