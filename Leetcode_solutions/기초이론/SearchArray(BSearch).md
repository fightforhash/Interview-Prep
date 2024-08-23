
# Binary Search (Search an Array)

Binary search is an efficient way of searching for elements within a sorted array. Typically we are given an array, and a target element to search for
Similarly, binary search divides a given array by the middle index, called mid and compares the value at mid to the target value. If the target is greater than the mid value, we will search the right half of the array. If the target is less than the mid value, we will search the left half of the array.

In interviews and algorithmic problems, there are two common variations of binary search problems:

1. Search Array - a sorted array, and a target is given and the task is to determine if the target is found in the array.
2. Search Range - a range of numbers is given rather than an array, without a specific target.

## Implementation

We calculate the mid index by adding the L and R pointers and dividing the result by 2. This is middle of our search space. 

1. L - the left-most index of the current subarray.
2. R - the right-most index of the current array.
3. mid - L + R / 2, the index at which the current sub-array divides itself into two equal halves.

Next, we will compare the value at the mid index to the target value. Either we will find the target at the mid index, or we will determine if the target is in the left or right half of the remaining search space. At each step, we will eliminate half of the search space.

### 1. Target exists in the array

![text](https://fast.image.delivery/ykhbqqq.jpg)
![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/84ece94d-88ad-4e76-9361-fde39487d800/sharpen=1)

```
arr = [1, 3, 3, 4, 5, 6, 7, 8]

def binarySearch(arr, target):
    L, R = 0, len(arr) - 1

    while L <= R:
        mid = (L + R) // 2

        if target > arr[mid]:
            L = mid + 1
        elif target < arr[mid]:
            R = mid - 1
        else:
            return mid
    return -1
```
> A better formula for calculating the mid value is L + (R - L) / 2. This will prevent any potential integer overflow errors. This article from Google Research provides an intuitive explanation.

### 2. Target doesn't exist in the array

It's also possible that the target does not exist in the array that we are searching. Let's take the same array, arr = [1,2,3,4,5,6,7,8], but this time our target is 9.

In this example our left pointer ends up out of bounds. More generally, we know that we have exhausted the search space when L is greater than R.

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/719bef09-3014-4649-f7a2-745eee643800/sharpen=1)

## Time and Spacew Complexity 

Work being done is very similar to merge sort which divides the array in half until we reach an array of size 1. 
Thus we end up with the same formula where x is the number of times we can divide the array in half until we reach an array of size 1. 

1 = n/2^x

After solving for x, we get x = log_2(n).

Thus, the time complexity for B search will be O(log n). 

