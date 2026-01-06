from typing import List 

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = {}
        freq = [[] for i in range(len(nums) + 1)]

        for j in nums:
            count[j] = 1 + count.get(j, 0)
        for j, c in count.items():
            freq[c].append(j)

        res = []
        for i in range(len(freq) - 1, 0 , -1):
            for j in freq[i]:
                res.append(j)
                if len(res) == k:
                    return res

solution = Solution()

nums=[1,2,2,3,3,3]
k=2

print(solution.topKFrequent(nums, k))