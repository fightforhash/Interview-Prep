# Dynamic Arrays

* Static 과 다르게 size declare 안함
* Java Default size 10 C# size 4

## Insertion

```
# Insert n in the last position of the array
def pushback(self, n):
    if self.length == self.capacity:
        self.resize()
        
    # insert at next empty position
    self.arr[self.length] = n
    self.length += 1
```
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/824e8bac-c064-4597-5d67-23c4d15f0900/sharpen=1)

## Resize 

Array size 가 dynamic 하니 알아서 element 추가할수있겠지만 그게 아니라 복사를 해야함 

```
def resize(self):
   # Create new array of double capacity
   self.capacity = 2 * self.capacity
   newArr = [0] * self.capacity 

   # Copy elements to newArr
   for i in range(self.length):
       newArr[i] = self.arr[i]
   self.arr = newArr
```
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/806bc423-9672-4c40-3f1a-3a27a7aef400/sharpen=1)

쓰기는 O(1) armortized time 

Armortized time complexity??
> Amortized time complexity is the average time taken per operation over a sequence of operations.

왜 굳이 두배로 늘려? 
> ![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/93d1f86f-ac47-469e-b2f7-9dd14435a300/sharpen=1)
>> take consideration of sum of all of the opeations 
>>> 여기 예제에선 1 + 2 + 4 + 7 그리고 7 < 8 그러니 우리는 총 15 operation 그리하여 O(N)
>>>> n elements 를 여기선 insert 해서 O(n) 그리고 armortized time 하나의 element는 O(1)


## 시간/공간 복잡도

Operation| Big-O-time | Notes
---|---|---
읽기|O(1)
쓰기|O(1)| 중간에넣으면 O(N) 하나씩 옮겨야하니까
지우기|O(1)| 중간에지우면 O(N) 하나씩 옮겨야하니까