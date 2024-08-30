class DynamicArray:
    
    def __init__(self, capacity: int):
        self.capacity = capacity
        self.size = 0
        self.arr = [0] * self.capacity
        
    def get(self, i: int) -> int:   
        return self.arr[i]

    def set(self, i: int, n: int) -> None:
        self.arr[i] = n

    def pushback(self, n: int) -> None:
        if self.size == self.capacity:
            self.resize()

        self.arr[self.size] = n
        self.size += 1

    def popback(self) -> int:
        if self.arr is not None:
            self.size -= 1
            return self.arr[self.size]

    def resize(self) -> None:
        self.capacity = self.capacity * 2
        new_arr = [0] * self.capacity
        for i in range(self.size):
            new_arr[i] = self.arr[i]
        self.arr = new_arr

    def getSize(self) -> int:
        return self.size
    
    def getCapacity(self) -> int:
        return self.capacity

def main():
    # Create an instance of DynamicArray with an initial capacity of 2
    da = DynamicArray(2)
    
    # Push elements to the array
    da.pushback(1)
    da.pushback(2)
    da.pushback(3)
    
    # Get elements from the array
    print("Element at index 0:", da.get(0))  # Output: 1
    print("Element at index 1:", da.get(1))  # Output: 2
    print("Element at index 2:", da.get(2))  # Output: 3
    
    # Set element at a specific index
    da.set(1, 10)
    print("Element at index 1 after setting to 10:", da.get(1))  # Output: 10
    
    # Pop an element from the back
    print("Popped element:", da.popback())  # Output: 3
    print("Size after pop:", da.getSize())  # Output: 2
    
    # Get current size and capacity
    print("Current size:", da.getSize())  # Output: 2
    print("Current capacity:", da.getCapacity())  # Output: 4 (since it resized)

if __name__ == "__main__":
    main()