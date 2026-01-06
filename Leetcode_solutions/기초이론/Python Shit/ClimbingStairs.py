class Solution:
    def climbStairs(self, n: int) -> int:
        memo = {}

        if n in memo:
            return memo.get(n)


        if n == 1:
            return 1
        
        if n == 2: 
            return 2

        
        res = self.climbStairs(n-1) + self.climbStairs(n-2)
        memo[n] = res
        return res
        
soluton = Solution()

print(soluton.climbStairs(30))