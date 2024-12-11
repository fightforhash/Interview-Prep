# Bucket Sort

## Concept

Imagine have an array of size 6 and contains values of an inclusive range 0-2. The idea behind is to create a "bucket" for each one of the numbers and map them to their respective buckets.

There will be a bucket for 0, 1, 2. This bucket which is just a position in a specified array will contain the frequencies of each one of the values within the range. For the sake of this example, we only have three valeus and accordingly we will have three buckets. 

> The term bucket will really just translate into a position in an array where we will map these frequencies.

Once each one of the buckets is filled with the frequency of each one of the values, we will overwrite all the values in the original array such that they end up in the sorted order.

## Implementation

```
def bucketSort(arr):
    # Assuming arr only contains 0, 1 or 2
    counts = [0, 0, 0]

    # Count the quantity of each val in arr
    for n in arr:
        counts[n] += 1
    
    # Fill each bucket in the original array
    i = 0
    for n in range(len(counts)):
        for j in range(counts[n]):
            arr[i] = n
            i += 1
    return arr
```

The first part of the pseudocode, right before we do i = 0, corresponds to filling up each one of the buckets. Let's explain the second part of the code a bit more. 

```
i = 0
for n in range(len(counts)):
    for j in range(counts[n]):
        arr[i] = n
        i += 1
return arr
```

* The i pointer will keep track of the next position for our original array, arr.
* The n pointer keeps track of the current position of the counts array.
* The j pointer keeps track of the number of times that counts[n] has appeared.

So, knowing that, we have our counts array which is [2,1,3]. And, our original input array is [2,1,2,0,0,2].

At the first iteration, n = 0, which corresponds to 2 in counts. Our inner loop will run two times, overwriting arr[0] and arr[1] to be 0. THis makes perfect sense because we had two zerso and putting them in arr ain an ajdjacent manner will resdult in them being sorted. This process will continue for ach number and the ultimate state of arr will be [0,0,1,2,2,2] which is the ultimate goal. 

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/1521e7e2-4f63-4326-38cd-f32bcd9d3400/sharpen=1)

## Time complexity 
for loop 2개인거 보고 O(n^2) 이라 생각하겠지만 아님.

First for loop wil run n times where n is the length of the counts array. However the inner loop will onlyu run until counts[n], which is different everytime. TQHe first time it will be 2, then 1,and then 3. THerefore, our algorithm belongs to O(n)

> It should be noted that nested for loops don't always mean a time complexity of O(n^2). As we saw saw above, it is important to analyze how many times the inner for loop executes on each outer for loop iteration. 

## Stability

Since we are overwriting the original array, there is no way to preserve the relative order of the values. There is no swapping that takes place either. Hence, it will stay unstable.

## Closing Notes

So while the bucket sort algorithm runs in O(n) time, we must remember that it will only work if the dataset is within a specified range. Generally, with algorithmic problems, the safest b est is making use fo merge sort, or quick sort. 


Algo| Big-O-time | Notes
---|---|---
Insertion Sort|O(n^2)| If fully, or nearly sorted, O(n)
Merge Sort|O(n log n)| 
Quick Sort|O(n log n)| In worst case O(n^2)
Bucket Sort|O (n)| Assujming all values in the input are in a specified range.