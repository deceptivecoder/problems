class binaryTree:
    def __init__(self, value = None):
        self.value  = value
        self.leftchild = None
        self.rightchild = None

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
            
    # Inorder traversal
    def printTree_inorder(self):
        if self.leftchild:
            self.leftchild.printTree_inorder()
        print(self.value)
        if self.rightchild:
            self.rightchild.printTree_inorder()

    def printTree_preorder(self):
        print(self.value)
        if self.leftchild:
            self.leftchild.printTree_preorder()
        if self.rightchild:
            self.rightchild.printTree_preorder()

    def printTree_postorder(self):
        if self.leftchild:
            self.leftchild.printTree_postorder()
        if self.rightchild:
            self.rightchild.printTree_postorder()
        print(self.value)

    #timecomplexity is O(n) space complexity O(1)
    def heightOfTree(self):
        if self is None:
            print("Tree is empty");  
            return 0
        else:
            leftHeight = 0
            rightHeight = 0
            if self.leftchild:
                leftHeight = self.leftchild.heightOfTree()
            if self.rightchild:
                rightHeight = self.rightchild.heightOfTree()
            
            max = leftHeight if (leftHeight>rightHeight) else rightHeight
            return max +1


if __name__ =="__main__":
    root = binaryTree()
    root.insert(10)
    root.insert(5)
    root.insert(20)
    root.insert(15)
    root.insert(25)
    print("inoder traversal: ")
    root.printTree_inorder()
    print("")
    print("preorder traversal: ")
    root.printTree_preorder()
    print("")
    print("postorder traversal: ")
    root.printTree_postorder()
    print("")
    print("Height of Tree: ", root.heightOfTree())

