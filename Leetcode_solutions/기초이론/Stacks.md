# Stack

LIFO 구조를 갖고 있음 (접시를 생각)

## Push
스택 위쪽에 올림 
O(1)

```
def push(self, n):
    # using the pushback function from dynamic arrays to add to the stack
    self.stack.append(n)
```

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/0e9488cb-496d-4e28-f395-83ae1f02c300/sharpen=1)

> Since a stack will remove elements in the reverse order that they were inserted in, it can be used to reverse sequences - such as a string, which is just a sequence of characters.


## Pop
마지막 element 를 Stack 위쪽에서 제거함
O(1)
```
def pop(self):
    return self.stack.pop()
```
![text]("https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/a4640d1e-c45e-4c36-7b3f-ae7e43cce000/sharpen=1")

> In most languages, before popping, it is a good measure to check if the stack is empty to avoid errors.

## Peek
Returns the top elemnt without removing it
O(1)

```
def peek(self):
    return self.stack[-1]
```

## 시간/공간 복잡도

Operation| Big-O-time | Notes
---|---|---
Push|O(1)
Pop|O(1)| Stack 비었는지 확인
Peek/Top|O(1)| 지우지않고 반환하는게 오리지널 구현