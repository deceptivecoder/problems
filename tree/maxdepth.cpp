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

int maxDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        int maxDepthLeft = maxDepth(root->left);
        int maxDepthRight = maxDepth(root->right);
        return max(maxDepthLeft, maxDepthRight) + 1;
}

int main(){
    TreeNode * root =NULL;
    //3,9,20,null,null,15,7
    root = InsertNode(root, 3);
    root = InsertNode(root, 9);
    root = InsertNode(root, 20);
    root = InsertNode(root, 0);
    root = InsertNode(root, 0);
    root = InsertNode(root, 15);
    root = InsertNode(root, 7);

    cout<<endl<<"base tree: ";
    preorder(root);
    //cout<<endl<<"inverted tree: ";
    cout<<endl<<maxDepth(root);
    //preorder(root);
    return 0;
}