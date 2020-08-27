#include<iostream>
#include<stack>

using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
};
void zigzagtraversal(struct Node* root){
    if(!root)//null rroot
    return;

    stack<struct Node*> currentlev;
    stack<struct Node*> nextlev;

    currentlev.push(root);//push the root

    bool leftToright=true;
    while(!currentlev.empty()){
        struct Node * temp =currentlev.top();
        currentlev.pop();

        //if not null
        if(temp){
            cout<<temp->data<<" ";

        }
        //store data according to current order
        if(leftToright){
            if(temp->left){
                nextlev.push(temp->left);
            }
            if(temp->right){
                nextlev.push(temp->right);
            }

        }
        else{
            if(temp->right){
                nextlev.push(temp->right);

            }
            if(temp->left){
                nextlev.push(temp->left);
            }
        }

    
    if(currentlev.empty()){
        leftToright=!leftToright;
        swap(currentlev,nextlev);
    }
    }
}
struct Node * newNode(int data){
        struct Node* node =new struct Node;
        node->data=data;
        node->left=node->right=NULL;
        return(node);

}
// driver program to test the above function 
int main() 
{ 
    // create tree 
    struct Node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(7); 
    root->left->right = newNode(6); 
    root->right->left = newNode(5); 
    root->right->right = newNode(4); 
    cout << "ZigZag Order traversal of binary tree is \n"; 
  
    zigzagtraversal(root); 
  
    return 0; 
} 