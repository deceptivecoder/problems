class Node:
    # Constructor to initialize the node object
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None # Head of list

    # approch 1
    def reverseLinkedList(self):
        current = self.head
        prev = None
        while current is not None:
            next = current.next
            current.next = prev
            prev = current
            current = next

        self.head = prev


    # Function to insert a new node at the beginning
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    # Utility function to print the LinkedList
    def printList(self):
        temp = self.head
        while (temp):
            print(temp.data, end=" ")
            temp = temp.next

if __name__ == "__main__":
    LL = LinkedList()
    LL.push(10)
    LL.push(20)
    LL.push(30)
    LL.push(40)
    LL.push(50)
    print("Given Linked List")
    LL.printList()
    print("\nReversed Linked List")
    LL.reverseLinkedList()
    LL.printList()