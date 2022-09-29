# This is an input class. Do not edit.
class LinkedList:
    def __init__(self, value):
        self.value = value
        self.next = None


#Time Complexity O(n) space O(1)
def removeDuplicatesFromLinkedList(linkedList):
    # Write your code here.
    if linkedList is None or linkedList.next is None:
        return linkedList

    temp = linkedList
    while temp.next is not None:
        print("temp.value: ", temp.value, "temp.next.value: ", temp.next.value)
        if temp.value == temp.next.value:
            temp.next = temp.next.next
        else:
            temp = temp.next
    return linkedList

def printList(linkedList):
    start = linkedList
    while start:
        print(start.value, end="->")
        start = start.next
    print("None")

if __name__ == "__main__":
    start = None
    node1 = LinkedList(10)
    node2 = LinkedList(20)
    node3 = LinkedList(20)
    node4 = LinkedList(40)
    node5 = LinkedList(50)
    node1.next = node2
    node2.next = node3
    node3.next = node4
    node4.next = node5
    start = node1
    printList(start)
    removeDuplicatesFromLinkedList(start)
    printList(start)


