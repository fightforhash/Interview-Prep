from typing import List 

class ListNode: 
    def __init__(self, val, next_node = None):
        self.val = val
        self.next = next_node

class LinkedList:
    def __init__(self):
        #Dummy node
        self.head = ListNode(-1)
        self.tail = self.head
    
    def get(self, index: int) -> int:
        curr = self.head.next
        i = 0
        while curr:
            if i == index:
                return curr.val
            i += 1
            curr = curr.next
        return -1

    def insertHead(self, val: int) -> None:
        new_node = ListNode(val)
        new_node.next = self.head.next
        self.head.next = new_node
        if not new_node.next:
            self.tail = new_node

    def insertTail(self, val: int) -> None:
        self.tail.next = ListNode(val)
        self.tail = self.tail.next

    def remove(self, index: int) -> bool:
        i = 0
        curr = self.head
        while i < index and curr:
            i += 1
            curr = curr.next

        if curr and curr.next:
            if curr.next == self.tail:
                self.tail = curr
            curr.next = curr.next.next
            return True
        return False

    def getValues(self) -> List[int]:
        curr = self.head.next
        res = []
        while curr:
            res.append(curr.val)
            curr = curr.next
        return res 
        

def main():
    # Create an instance of LinkedList
    ll = LinkedList()
    
    # Insert elements at the head
    ll.insertHead(1)
    ll.insertHead(2)
    ll.insertHead(3)
    
    # Insert elements at the tail
    ll.insertTail(4)
    ll.insertTail(5)
    
    # Get elements from the list
    print("Element at index 0:", ll.get(0))  # Output: 3
    print("Element at index 1:", ll.get(1))  # Output: 2
    print("Element at index 4:", ll.get(4))  # Output: 5
    
    # Remove an element
    ll.remove(1)
    print("List after removing element at index 1:", ll.getValues())  # Output: [3, 1, 4, 5]
    
    # Get all elements
    print("All elements in the list:", ll.getValues())  # Output: [3, 1, 4, 5]

if __name__ == "__main__":
    main()