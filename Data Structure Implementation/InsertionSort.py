from typing import List
# Definition for a pair.
class Pair:
    def __init__(self, key: int, value: str):
        self.key = key
        self.value = value

    def __repr__(self):
        return f"{self.key}, {self.value}"


class Solution:
    def insertionSort(self, pairs: List[Pair]) -> List[List[Pair]]:
        res = []
        for i in range(len(pairs)):
            j = i - 1

            while j >= 0 and pairs[j].key > pairs[j + 1].key:
                pairs[j + 1],pairs[j] = pairs[j], pairs[j + 1]
                j -= 1

            res.append(pairs[:])

        return res

def main():
    pairs = [Pair(5, "apple"), Pair(2, "banana"), Pair(9, "cherry")]
    pairs2 = [Pair(3, "cat"), Pair(3, "bird"), Pair(2, "dog")]

    solution = Solution()

    sorted_steps = solution.insertionSort(pairs)
    sorted_steps2 = solution.insertionSort(pairs2)

    for step in sorted_steps, sorted_steps2:
        print(step)

if __name__ == "__main__":
    main()