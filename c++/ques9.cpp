#include <iostream>
#include<iostream>
#include<iomanip>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<math.h>
#include<limits.h>
#include<string>
#define NINF INT_MIN
#define N 4
#define M 6
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)

{
  struct Node* node = (struct Node*)
                       malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}
void inorder(struct Node *root){ //cout<<"current node"<<root->data<<"/n";
  if(root->left)
    inorder(root->left);
  cout<< root->data;
  if(root->right)
    inorder(root->right);
}
void mirror(struct Node *root){ //cout<<"\nmirror:";
struct Node* temp = NULL;

    if(root->left)
      mirror(root->left);
    if(root->right)
      mirror(root->right);
    // cout<<root->data<<"mirror processed \n";
    if(root->right)
      {
      if(root->left)
        temp = root->left;
      root->left = root->right;}
    if(temp)
      root->right = temp;
}

int main(){
  struct Node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  inorder(root);
  mirror(root);
  cout<<"\n";
  inorder(root);
}
