1. The i pointer points at the element we are currently inserting into the sorted portion of the array.
2. The j pointer starts off one index to the left of i.
3. Our goal is to find the position that arr[i] should be inserted into the sorted portion of the array.
4. We continue swapping it with arr[j] until we find the correct position.
5. After each swap we shift j to the left by 1
6. We stop once the element is greater than or equal to the element to its left.

```
def insertionSort(arr):
    # Traverse through 1 to len(arr)
    for i in range(1, len(arr)):
        j = i - 1
        while j >= 0 and arr[j + 1] < arr[j]:
            # arr[j] and arr[j + 1] are out of order so swap them 
            tmp = arr[j + 1]
            arr[j + 1] = arr[j]
            arr[j] = tmp
            j -= 1
    return arr
```

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/f6edc4d8-ebbe-4276-a4d6-b7272268dd00/sharpen=1)

> You may be wondering if insertion sort will work on different data types apart from the integers? The answer is yes. As long as there is a way to compare two values, sorting algorithms generally work on any data type.
> The terms above such as subarray and subproblem may remind you of the concept of recursion, which we just learned. Insertion sort happens to be easier to implement iteratively, but we will also learn some sorting algorithms that are implemented recursively.

## Stability 
[7,3,7]
There are two 7s one at the 0th index and the other at the 2nd index. We know that the relative order of these two 7s will stay the same wince 3 will swap with the 7 at the 0th index and then the while loop will never be implemented. 
This is called stable sorting algorithm. Insertion sort = stable -> Guarateed that relative order wil remain the same.

## Time and Space Complexity

### Time
If the input array is already sorted you may notice that the inner loop will never execute. This is the best case scenario for insertion sort where the time complexity is O(n).
In the worst case scenario, time complexity is O(n^2). Inner loop will execute n times for each element in the array.

What input would be the worst scenario?
-> When array is in reverse order

[5,4,3,2,1]
outer loop will iterate through entire array and inner loop will execute n times for each element in array.

Array is in random order, time complexity is still O(n^2) in the avg case. 

### Space
In place sorting algo so O(1)
