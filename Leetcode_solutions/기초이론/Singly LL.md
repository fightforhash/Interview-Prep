# Linked List
* Array 와 비슷하지만 *ListNode* 라는 object 가 존재함

```
1. Value - Stores the value, can be a char, int etc
2. next - Stores the reference to next node in LL. 
```

## LL construction

```
class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None
```

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/9b99c7c9-8b41-44e1-b011-e3f2ce633100/sharpen=1)


> When we instantiate a list node, we don't know where it is stored in memory. The nodes likely won't be contiguous like arrays, but that isn't an issue for linked lists. The visual below gives a glimpse of how the nodes would be stored in memory.

> Next, we would need to make sure that our next pointers point to another ListNode, and not null. Only the last node in the linked list would have its next pointer point to null.

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/eb8c55ba-5519-4f0c-9cc1-01e5a5069e00/sharpen=1)
```
ListNode1.next = ListNode2
```
>ListNode1’s next pointer points to ListNode2. Next, we set the next pointer for ListNode2 and ListNode3.


![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/0e925c41-0ca5-4e0e-7ba6-4aa2b07b2c00/sharpen=1)

```
ListNode2.next = ListNode3
ListNode3.next = null
```
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/0e925c41-0ca5-4e0e-7ba6-4aa2b07b2c00/sharpen=1)

## Traversal

LL 첨부터 끝까지 while loop

```
cur = ListNode1
while cur:
    cur = cur.next
```

```
We start the traversal at the head of the list, which is ListNode1.
We assign it to a variable cur, denoting the current node we are at.
We execute the while loop until we reach the end of the list which is null.
In each iteration, we update cur to be the next node in the list by setting cur = cur.next.
The traversal runs in O(N) time where n is # of nodes in LL.
```
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/7a1a5bd7-3d4c-47c2-1281-8da922820700/sharpen=1)

## Circular LL

Leads to infinite loop
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/b4016449-c305-4684-f861-0074a0695800/sharpen=1)

## Operations

### Append
어레이보다 좋은점은 중간에 insert 해도 O(1) 타임이라는것 

> 우리가 쓰고싶은 포지션의 레퍼런스 노드가 있다는 가정하에 O(1) traverse 하면 O(N)

ListNode4 를 만약 넣고싶다면 tail에 넣을 것. ListNode4가 appended되고 나면 tail을 ListNode4로 변경. 걸리는 시간은 O(1) 
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/e4dd25e2-2cdb-4b02-2019-1cd6e4aab900/sharpen=1)

```
tail.next = ListNode4
```
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/aee8a013-fe18-4b31-8c37-770b2f265c00/sharpen=1)

```
tail = ListNode4
```
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/27e84eeb-dd25-4cf9-dd30-9574f7a5f100/sharpen=1)

## Delete

Takes O(1) time
Update single pointer

> This assumes we already have a reference to the node at the desired position we want to delete. If we have to traverse the list to arrive at the deletion point, the operation would take O(n) time.

ListNode2를 지우고 싶다면 head가 ListNode1에 point 되고 head.next가 ListNode2에 point 되니 head.next를 ListNode3에 지정함(head.next.next)

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/adfeff07-5e43-4fbb-d4d9-a89d48f43300/sharpen=1)

```
head.next = head.next.next
```

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/4b5e968e-42c7-40aa-a7b9-dfeec8d7f700/sharpen=1)

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/4b012cbc-c13e-436a-e7be-b3116525b800/sharpen=1)

> It can be assumed that the memory occupied by ListNode2 will be cleared via garbage collection in most lanugages. In other languages like C, you would have to manually free the memory.



## 시간/공간 복잡도

Operation| Big-O-time | Notes
---|---|---
읽기(Access)|O(N)
찾기(Search)|O(N)
쓰기(Append)|O(1)| 레퍼런스 노드 있다는 가정하에
지우기(Delete)|O(1)| 레퍼런스 노드 있다는 가정하에