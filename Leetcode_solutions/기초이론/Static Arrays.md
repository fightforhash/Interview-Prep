# Static Arrays

* 사이즈랑 타입 있음<br>
* 한번 정하고 나면 사이즈 바꿀수없음<br>

## Array 에서 값 불러올땐 인덱스로

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/d993dba7-19fa-4dae-748b-1a7a1d9e0900/sharpen=1)
```
# initialize myArray
myArray = [1,3,5]

# access an arbitrary element, where i is the index of the desired value
myArray[i]
```

```
for i in range(len(myArray)):
   print(myArray[i])

# OR

i = 0
while i < len(myArray):
   print(myArray[i])
   i += 1
```

## 어레이 끝 인덱스 빼줄때 
```
# Remove from the last position in the array if the array
# is not empty (i.e. length is non-zero).
def removeEnd(arr, length):
    if length > 0:
        # Overwrite last element with some default value.
        # We would also consider the length to be decreased by 1.
        arr[length - 1] = 0
```

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/abf96287-60e4-460a-b480-04804743ae00/sharpen=1)

## 특정 인덱스를 뺼때 

```
1. i 를 빼야하는거 인지
2. i+1 부터 Array 끝까지 Traverse
3. 1포지션씩 왼쪽으로 쉬프트함
4. (선택) 마지막 원소를 0이나 null로 빈 상태로 만들고 length를 하나 줄임 
```

```
# Remove value at index i before shifting elements to the left.
# Assuming i is a valid index.
def removeMiddle(arr, i, length):
    # Shift starting from i + 1 to end.
    for index in range(i + 1, length):
        arr[index - 1] = arr[index]
    # No need to 'remove' arr[i], since we already shifted
```

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/c548890a-6c61-4359-c96a-c04073291300/sharpen=1)

## 시간/공간 복잡도

Operation| Big-O-time | Notes
---|---|---
읽기|O(1)
쓰기|O(N)| 객체 끝에 붙으면 O(1)
지우기|O(N)| 객체 끝에 붙으면 O(1)
