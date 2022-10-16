class binaryTree:
    def __init__ (self, data = None):
        self.value = data
        self.leftchild = None
        self.rightchild = None

    def printTree_preorder(self):
        print(self.value, end=" ")
        if self.leftchild:
            self.leftchild.printTree_preorder()
        if self.rightchild:
            self.rightchild.printTree_preorder()

    def printTree_inorder(self):
        if self.leftchild:
            self.leftchild.printTree_inorder()
        print(self.value,end=" ")
        if self.rightchild:
            self.rightchild.printTree_inorder()

    def printTree_postorder(self):
        if self.leftchild:
            self.leftchild.printTree_postorder()
        if self.rightchild:
            self.rightchild.printTree_postorder()
        print(self.value, end=" ")


    def insert(self, data):
        if self.value:
            if data < self.value:
                if self.leftchild is None:
                    self.leftchild = binaryTree(data)
                else:
                    self.leftchild.insert(data)
            elif data > self.value:
                if self.rightchild is None:
                    self.rightchild = binaryTree(data)
                else:
                    self.rightchild.insert(data)
        else:
            self.value = data

    def heightOfTree(self):
        if self.value is None:
            return 0
            
        else:
            leftSubTreeHeight = self.leftchild.heightOfTree()
            rightSubTreeHeight = self.rightchild.heightOfTree()
            
            if (leftSubTreeHeight > rightSubTreeHeight):
                return leftSubTreeHeight +1
            else:
                return rightSubTreeHeight +1

if __name__ =="__main__":
    node = binaryTree()
    node.insert(10)
    node.insert(5)
    node.insert(20) 
    node.insert(15)
    node.insert(25)
    print("print preorder traversal: ")
    node.printTree_preorder()
    print(" ")
    print("print inorder traversal: ")
    node.printTree_inorder()
    print(" ")
    print("print postorder traversal: ")
    node.printTree_postorder()
    print(" ")
    print("height of the tree is : ", node.heightOfTree())

