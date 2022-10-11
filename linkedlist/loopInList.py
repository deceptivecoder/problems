import code
from pickle import FALSE


class Node:
    def __init__ (self, data):
        self.value = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None # Head of list

    def insert(self, data):
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode
    
    def printList(self, node= None):
        temp = self.head
        if temp == None:
            print("List is Empty")
        while temp:
            print(temp.value,"->" , end=" ")
            temp = temp.next
        print("")
    #time complexity O(n) and space complexity O(n)
    # Psudo Code
    # 1. if no node or one node return no loop
    # 2. loop through loop and see if node is present in dict or not.
    # 3. if node is alreadyvisited return loop is present
    # 4. else add node in dict and increment in list

    def detectLoopinList(self):
        alreadyVisited = {} #map to track nodes
        temp = self.head

        if temp is None or temp.next is None:
            return False
        
        while temp is not None: 
            if temp.value in alreadyVisited:
                print("")
                return True
                # return temp.value  
            else:
                alreadyVisited[temp.value] = True
                temp = temp.next
        print("")
        return False    

    # time complexity O(n) and space complexity O(1)
    def detectLoopinListUsingPointer(self):
        slow = self.head
        fast = self.head
        
        while slow is not None and fast is not None and fast.next is not None:
            slow = slow.next
            fast = fast.next.next
            if slow == fast:
                print("")
                #return True
                return slow

    def detectLoopStarting(self, pointofmeet):
        slow = self.head
        while pointofmeet != slow:
            pointofmeet = pointofmeet.next
            slow = slow.next
        print("")
        return slow

    def removeLoop(self, startingofLoop):
        slow = startingofLoop.next
        fast = startingofLoop.next.next
        previousNode = startingofLoop
        
        while slow != fast:
            previousNode = slow
            slow = slow.next
            fast = fast.next.next
            
        previousNode.next = None
        print("")
        return

 
if __name__ == '__main__':
    List = LinkedList()
    # node1 = List.insert(10)
    # node2 = List.insert(20)
    # node3 = List.insert(30)
    # node4 = List.insert(40)
    # node5 = List.insert(50)

    List.head = Node(10)
    second = Node(20)
    third = Node(30)
    forth = Node(40)
    fifth = Node(50)
    # sixth = Node(60)
    List.head.next = second
    second.next = third
    third.next = forth
    forth.next = fifth
    fifth.next = third
    # Loop in the list
    # sixth.next = third  
    # print("List is: ")
    # List.printList()
    print("")
    print("Loop detected in List: ", end= " ")
    # Detect loop in the list
    print(List.detectLoopinList())

    print("")
    print("Loop detected in List using floyed: ", end= " ")

    # Detect loop in the list
    pointofmeet = List.detectLoopinListUsingPointer()
    print(pointofmeet.value)
    print("")
    print("starting node of loop start: ", end= " ")
    startingofLoop = List.detectLoopStarting(pointofmeet)
    print(startingofLoop.value)
    List.removeLoop(startingofLoop)
    print("List without Loop: ", end=" ")
    List.printList()
