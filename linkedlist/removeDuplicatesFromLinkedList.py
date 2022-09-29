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

#Time Complexity O(n) space O(n) when node are not repeated at sorted order
def delete_duplicates(self):

    current = self
    # This is require to keep track of the prev Node
    prev = None
    duplicate_dict = dict()
    while current:
        if current.value not in duplicate_dict:
            duplicate_dict[current.value] = None
            # Track the prev Node
            prev = current
        else:
            # When a duplicate is found assign prev Node's next to current's next
            prev.next = current.next

        current = current.next

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
    node5 = LinkedList(10)
    node6 = LinkedList(40)
    node7 = LinkedList(50)

    node1.next = node2
    node2.next = node3
    node3.next = node4
    node4.next = node5
    node5.next = node6
    node6.next = node7

    start = node1

    printList(start)
    # removeDuplicatesFromLinkedList(start)
    delete_duplicates(start)
    printList(start)



