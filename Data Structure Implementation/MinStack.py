class MinStack:

    def __init__(self):
        # Initialize two stacks: one for all elements and one for tracking minimum elements
        self.stack = []
        self.obs = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        # Push onto the min stack if it's empty or the new value is less than or equal to the current min
        if (not self.obs or val <= self.obs[-1]):
            self.obs.append(val)

    def pop(self) -> None:
        topVal = self.stack.pop() 
        if topVal == self.obs[-1]: # If the popped value is the current min, pop from min stack as well
            self.obs.pop()

    def top(self) -> int:
        if self.stack:
            return self.stack[-1] 

    def getMin(self) -> int:
        if self.obs:
            return self.obs[-1]


min_stack = MinStack()
min_stack.push(-2)
min_stack.push(0)
min_stack.push(-3)
print(min_stack.getMin())  # Output: -3
min_stack.pop()
print(min_stack.top())     # Output: 0
print(min_stack.getMin())  # Output: -2