# Recursion(One branch)

Has 2 parts

> For some problems an iterative solution can be much more simple to implement than a recursive one, and vice versa.

## Cases
1. Base
2. Recursive

Example 
n! = n * (n - 1) * (n - 2) * ... * 1.

For example, 5! = 5 * 4 * 3 * 2 * 1 = 120

1. Notice that 5! can be broken down into 5 * 4!
2. 4! can be broken down into 4 * 3! and so on. This is recursive case
3. The base case is when n = 0 or n = 1. The result of 0! and 1! is 1. 

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/23de5b6b-0f60-4247-1361-6f080e7fa300/sharpen=1)

```
# Recursive implementation of n! (n-factorial) calculation
def factorial(n):
    # Base case: n = 0 or 1
    if n <= 1:
        return 1

    # Recursive case: n! = n * (n - 1)!
    return n * factorial(n - 1)
```

The most important part is that when we trigger the base case, we move back "up" the recursion tree because now we have to "piece" together the answers to our sub-problems to get to the final solution.

![text](https://imagedelivery.net/CLfkmk9Wzy8_9HRyug4EVA/19ee0f47-8613-4577-858c-2bb174467000/sharpen=1)

> As observed, we took the original problem, factorial(5) and broke it down into smaller sub-problems, and by combining the answer to those sub-problems, we were able to solve the original problem. It is important to note that if there is no base case in recursion, the recursive case would execute forever resulting in a stack overflow error.

## Time and Space Complexity
Time : O(N)
* In total, n calls are being made to the factorial function, where each function call is O(1), making the total time complexity O(n).

Space: O(N)
* While we aren't using any data structures, recursion operates off of an implicit stack, known as the function call stack. That is how we are able to return from one function call to the previous one. Since there are n recursive calls -> n function calls -> O(N) space

## Iteration and Recursion

Most recursive algorithms can be written iteratively. The iterative implementation of this is the following:

```
n = 5
res = 1
while n > 1:
    res = res * n
    n -= 1
```

In the iterative case, we store our answer in a variable named res and decrement n until n becomes 1.

The iterative implementation is much simpler than the recursive one in this case, but that's not always the case. Recursion will be especially useful when we start learning about trees.

This solution is also more space efficient since it doesn't require the function call stack.