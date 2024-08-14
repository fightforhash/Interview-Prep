# Queues

FIFO 구조
예시로 은행에 있는 줄. 첫번째로 줄선사람이 첫번째로 서비스

## Implementation and Operations
가장쉬운 방법은 LL 사용 
Dynamic array 쓸수있지만 more involved
LL 이랑 복잡도 같으려면 circular array 에 추가적인 작업 해야함

enqueue 랑 dequeue support 함


### Enqueue
element 를 queue 끝에 추가함 singly LL로 구현하면 O(1) 복잡도

```
def enqueue(self, val):
    newNode = ListNode(val)

    # Queue is non-empty
    if self.right:
        self.right.next = newNode
        self.right = self.right.next
    # Queue is empty
    else:
        self.left = self.right = newNode
```
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/3c1a4770-61d3-454d-8e48-18e6d8a70800/sharpen=1)

### Dequeue
큐 앞에 있는 element 제거 하고 리턴시킴

```
def dequeue(self):
    # Queue is empty
    if not self.left:
        return None
    
    # Remove left node and return value
    val = self.left.val
    self.left = self.left.next
    if not self.left:
        self.right = None
    return val
```
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/856f3974-9e69-4783-8186-467c0b25b300/sharpen=1)

> Similar to stacks, it is a good measure to check if the queue is empty before performing the dequeue opeartion.

> There is also a variation of the queue, a double-ended queue, known as a deque (pronounced "deck"). A deque allows you to add and remove elements from both the head and the tail in O(1) time.

> One of the most important use cases for the queue is when performing breadth-first search for trees and graphs, which we will cover later in the course.


## 시간/공간 복잡도

Operation| Big-O-time | Notes
---|---|---
Enqueue| O(1)
Dequeue| O(1)