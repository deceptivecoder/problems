#include <iostream>
#include <queue>
using namespace std;
 
/* A binary tree node has data, pointer to left child
and a pointer to right child */
 
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};
 
// Function to create a new node
TreeNode* CreateNode(int data)
{
    TreeNode* newNode = new TreeNode();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
 
// Function to insert element in binary tree
TreeNode* InsertNode(TreeNode* root, int data)
{
    // If the tree is empty, assign new node address to root
    if (root == NULL) {
        root = CreateNode(data);
        return root;
    }
 
    // Else, do level order traversal until we find an empty
    // place, i.e. either left child or right child of some
    // node is pointing to NULL.
    queue<TreeNode*> q;
    q.push(root);
 
    while (!q.empty()) {
        TreeNode* temp = q.front();
        q.pop();
 
        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = CreateNode(data);
            return root;
        }
 
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = CreateNode(data);
            return root;
        }
    }
}

void preorder(TreeNode* temp)
{
    if (temp == NULL)
        return;
 
    cout << temp->data << ' ';
    preorder(temp->left);
    preorder(temp->right);
}

TreeNode* invertTree(TreeNode* root) {
    if(root == NULL) return NULL;
    swap(root->left, root->right);
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

int main(){
    TreeNode * root =NULL;
    //4,2,7,1,3,6,9
    root = InsertNode(root, 4);
    root = InsertNode(root, 2);
    root = InsertNode(root, 7);
    root = InsertNode(root, 1);
    root = InsertNode(root, 3);
    root = InsertNode(root, 6);
    root = InsertNode(root, 9);

    cout<<endl<<"base tree: ";
    preorder(root);
    cout<<endl<<"inverted tree: ";
    root = invertTree(root);
    preorder(root);
    return 0;
}