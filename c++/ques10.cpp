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

void mirrorBFS(struct Node *root){ //cout<<"\nmirror:";
struct Node* temp = NULL;
queue<struct Node *> q;
q.push(root);
while(!q.empty()){
  struct Node* curr = q.front();
  q.pop();
  struct Node* temp = NULL;
  if(curr->right)
  { temp = curr->right;
    q.push(curr->right);
    curr->right = curr->left;
    }
  if(curr->left)
  {
    q.push(curr->left);}
  if(temp)
    {
      curr->left= temp;
    }
}

}

int main(){
  struct Node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5);
  inorder(root);
  mirrorBFS(root);
  cout<<"\n";
  inorder(root);
}
