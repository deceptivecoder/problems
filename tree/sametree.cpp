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

bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) return (p == q);
        
        return (p->data == q->data && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}

int main(){
    TreeNode * root1 =NULL;
    //3,9,20,null,null,15,7
    root1 = InsertNode(root1, 3);
    root1 = InsertNode(root1, 9);
    root1 = InsertNode(root1, 20);
    root1 = InsertNode(root1, 0);
    root1 = InsertNode(root1, 0);
    root1 = InsertNode(root1, 15);
    root1 = InsertNode(root1, 7);
    TreeNode * root2 =NULL;
    //3,9,20,null,null,15,7
    root2 = InsertNode(root2, 13);
    root2 = InsertNode(root2, 9);
    root2 = InsertNode(root2, 20);
    root2 = InsertNode(root2, 0);
    root2 = InsertNode(root2, 0);
    root2 = InsertNode(root2, 15);
    root2 = InsertNode(root2, 7);

    cout<<endl<<"tree1: ";
    preorder(root1);
    cout<<endl<<"tree1: ";
    preorder(root2);
    cout<<endl<<"tree1 and tree2 are same or not "<<isSameTree(root1, root2)<<endl;
    return 0;
}