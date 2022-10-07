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

if __name__ =="__main__":
    node = binaryTree()
    node.insert(20)
    node.insert(30)
    node.insert(5)
    node.insert(35)
    node.insert(1)
    node.printTree_inorder()
    print("")
    node.printTree_preorder()
    print("")
    node.printTree_postorder()
    print("")
