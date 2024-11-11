# Doubly LL

Have
1. prev
2. next
3. value

<img src = "https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/0d62c9ac-6724-4aa7-e04b-49831a3a5800/sharpen=6" width = "200" height = "200">

# Operations

## Insertion End
Takes O(1)
have to update the prev pointer as well

For example, if we have three nodes in our linked list, ListNode1, ListNode2 and ListNode3. Now we have another node, ListNode4, that we wish to insert at the end. We will have to update both the next pointer of ListNode3 and the prev pointer of ListNode4.

```
tail.next = ListNode4
ListNode4.prev = tail
tail = tail.next
```

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/64a757a6-4dd0-4ea0-2f25-e57b2cab0c00/sharpen=1)

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/dc183286-3867-4dbf-4dee-e6f71854c900/sharpen=1)

## Deletion End
Also O(1)

1. First we get reference to the node before the tail
2. We update next pointer of the node before the tail to null.
3. We update the tial to be the node before the tail
4. (Optional) We can also update the prev pointer of the old tail to null.

```
ListNode2 = tail.prev
ListNode2.next = null
tail = ListNode2 
```
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/dcae4bac-10c1-41a1-04d5-b2dc84c8ae00/sharpen=1)

> Since we can insert and remove from the end in O(1) time, in theory, we could implement a stack with a linked list instead of an array. This is less common, but it is a possibility. 

## Deletion Front

```
head.next = prev.null
head = head.next 
```

## Access
Similar to singly LL, we cannot randomly access a node so we have to traverse n nodes before reaching the desired node. 

## 시간/공간 복잡도

Operation| Big-O-time | Notes
---|---|---
읽기(Access)|O(N)
찾기(Search)|O(N)
쓰기(Append)|O(1)| 레퍼런스 노드 있다는 가정하에
지우기(Delete)|O(1)| 레퍼런스 노드 있다는 가정하에