# Recursion (Two Branch)

1. F(0) = 0 and F(1) = 1
2. F(n) = F(n - 1) + F(n - 2)

fib(n) = fib(n - 1) + fib(n - 2)

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/01fc8a19-c7e3-4de4-1a8f-22fa4d027e00/sharpen=1)

```
# Recursive implementation to calculate the n-th Fibonacci number
def fibonacci(n):
    # Base case: n = 0 or 1
    if n <= 1:
        return n

    # Recursive case: fib(n) = fib(n - 1) + fib(n - 2)
    return fibonacci(n - 1) + fibonacci(n - 2)
```

## Explanation

We have our base case, we know the function calls itself in the last return statement, and we know that at some point when the base case is reached, we will have to travel back "up" to calculate the ultimate answer.

1. To calculate fibonacci(5), we get fibonacci(4) + fibonacci(3).
2. Now, both of these will execute within their own function calls. Looking at
3. fibonacci(4) will call fibonacci(3) + fibonacci(2) and so on, until n hits 1 or 0
4. After that it will return the result, and keep going back up all the way until fibonacci(4) which will give us an answer of 3.
5. Now, we have the answer to fibonacci(4) and do the same for fibonacci(3) which results in 2.
6. Add the two together, and the 5th fibonacci number is 5.

## Time and Space Complexity 

Evaulating the time complexity for this is a little bit more tricky. Let's analyze the tree, and the number of nodes on each one of the levels. On the 1st level (0 indexed), there is 1, on the 2nd level, there are 2, then 4, after which we can see a pattern. Each level has the potential to hold 2x the nodes of the prev level. 

Therefore upperbound is 1 + 2 + 4 + 8 + ... + 2^n. This is a geoemetric series, similar to what we saw in dynamic array chapter and 
sum of the series is 2^(n+1)-1. 

That means total # of nodes in the tree is O(2^n). Each node itself is a function call and simply calculates the sum of two values, thus the time complexity of the function is O(2^n)

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/8c0f970f-decf-4931-f875-fa521d267800/sharpen=1)