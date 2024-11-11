# Merge Sort

This is a technique that is known as divide and conquer. We divide the problem into smaller subproblems, solve them and then combine the solutions to get the final answer.

## Implementation

Array size 5 as example [3,2,1,4,6] Sort in increasing(non decreasing) order if we had duplicates. We will be splitting the array like the following.

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/55728d04-816e-4176-985c-e82da4112b00/sharpen=1)

```
# Implementation of MergeSort
def mergeSort(arr, s, e):
    if e - s + 1 <= 1:
        return arr

    # The middle index of the array
    m = (s + e) // 2

    # Sort the left half
    mergeSort(arr, s, m)

    # Sort the right half
    mergeSort(arr, m + 1, e)

    # Merge sorted halfs
    merge(arr, s, m, e)
    
    return arr
```

1. We have base care where if length of array is less than or equal to 1, we return array since its alreadya sorted.
2. Otherwise wee acalculate the middle indeex of the array.
3. We recursively call mergeSort() on the left half of the array. ;We do this by passing pointerfs s and m top the function, which in this case represetn the start and enda of the left half of the array. 
4. We recursively call mergeSrot() on the right half of the array. We do this by passing pointers m + 1 and e to the function which ipn thi s case represetn tthe start and end of the right half of the array.
5. We merge the two sorted halves by calling the merge() function, which is discussed more below.

## Visualization and Pseudocode
### Mergesort Recursive call. 

Once we have the subarray [3,2] sorted to [2,3] - this is the mergeSort(arr,s , m) part. Now, we can move on to sorting the [4], which corresponds to the mergeSort(arr, m + 1, e).

It is important to note the sequence in which the calls are executed. The merge() call will not be executed until both the recurive mergeSort() calls have returned for the current subarray. The first visual below shows sorting and merging the left half. The second visual shows sorting and merging the second half to get the ultimate sorted array. 

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/23d6fbdf-2fe5-4ff6-2c55-473b789a9600/sharpen=1)

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/d497f50f-b72f-4038-06e3-fbbf60ac1000/sharpen=1)

The merge() function and three pointers.

As observed in the visual above, we have three pointers, k, j and i.
* k keeps track of where the next element in arr needs to be placed.
* i points to the element in the leftSubarray that is currently being compared to the j element in the rightSubarray.
* One of i or j will increment depoending on which element is smaller
* k will increment regardless becasue arr will have an element placed inside of it regardless of which one of i or j increments

```
# Merge in-place
def merge(arr, s, m, e):
    # Copy the sorted left & right halfs to temp arrays
    L = arr[s: m + 1]
    R = arr[m + 1: e + 1]

    i = 0 # index for L
    j = 0 # index for R
    k = s # index for arr

    # Merge the two sorted halfs into the original array
    while i < len(L) and j < len(R):
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    # One of the halfs will have elements remaining
    while i < len(L):
        arr[k] = L[i]
        i += 1
        k += 1
    while j < len(R):
        arr[k] = R[j]
        j += 1
        k += 1
```

> Recall that even though the visual only demonstrates the merging of the ultimate subarray, recursion tells us that the merge happens on every level after the arrays are sorted because we would never have gotten to the ultimate array if the subarrays had not been sorted and merged.
> The piece of code used for i pointer and j pointer is acually referred to as the two pointer technique and is extremely common. In this case it is used to combine two arrays in O(n+m) time, where n and m are the lengths of the two arrays. 

## Time and space complexity 
### Time
Merge Sort runs in O(n log n). 

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/600da4fb-21e7-4559-af19-afb78ec85100/sharpen=1)

![text](https://fast.image.delivery/qnrqnyk.jpg)


### Space 
height of the recursion tree is log n and at each level. At any level we have n elements to sort which will allocate temporary arrays for in the merge() function.
To get the total space complexity we sum both terms and get O(n + log n), which simplifies to O(n).
The reason we sum rather than multiply is because not all of the temporary arrays will be allocated at the same time, but rather one at a time.

### Stability
Merge Sort proves to be a stable algorithm vbecause if we have a pair of duplicates, say, 7, the 7 in the left subarray will always end up in the merged array first followed by the 7 in the right subarray. THis is because when we compare the ith element in the left subarray to the jth element in the right subarray for equality, we pick the one in the left subarray, maintaining the relative order. Recall the following pseudocode from the merge() subroutine. 

```
if leftSubarray[i] <= rightSubarray[j]:
    arr[k] = leftSubarray[i]
    i += 1
```

### Closing Notes
SO how does merge sort stack up with insertion sort? Insertion sort O(N^2) merge in O(N log N) so merge sort is superior

The only tine where insertion might be preferred is when the array has fewer elements and is already or nearly sorted as it would skip the swapping. 