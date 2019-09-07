#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
struct node{
    struct node *left;
    struct node *right;
    ll pos;
    ll value;
};

struct node* getNode(ll value, ll pos){
    struct node* temp = new node;
    temp->left = NULL;
    temp->right = NULL;
    temp->pos = pos;
    temp->value = value;
    return temp;
}

struct node* insertNode(struct node *root, ll value, ll pos){
    if(root==NULL){
        struct node * tmp = getNode(value, pos);
        cout<<pos<<endl;
        return tmp;
    }
    else{
        if(value > root->value){
            root->right = insertNode(root->right, value, 2*(pos)+1);
        }
        else{
            root->left = insertNode(root->left, value, 2*pos);
        }
    }
    return root;
}

struct node* findMinValue(struct node *root){
    struct node* current = root;
    while(current && current->left){
        current=current->left;
    }
    return current;
}

struct node* deleteNode(struct node *root, ll value){
    if(root!=NULL){
        if(root->value > value){
            root->left = deleteNode(root->left, value);
        }
        else if(value > root->value){
            root->right = deleteNode(root->right, value);
        }
        else{
            cout<<root->pos<<endl;
            if(root->left==NULL){
                struct node* temp = root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL){
                struct node* temp = root->left;
                delete root;
                return temp;
            }
            else{
                struct node* temp = findMinValue(root->right);
                    root->value = temp->value;
                    root->right = deleteNode(root->right, temp->value);
                    return root;
            }
        }
    }
    return root;
}

int main(){
    struct node *root = NULL;
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        ll x;
        cin>>x;
        if(c=='i'){
            root = insertNode(root, x, 1);
        }
        else if(c=='d'){
            root = deleteNode(root, x);
        }
    }
}