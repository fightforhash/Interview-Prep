from collections import Counter

class Solution(object):
    def countStudents(self, students, sandwiches):
        """
        :type students: List[int]
        :type sandwiches: List[int]
        :rtype: int
        """
        
        counts = [0, 0]
        for student in students:
            counts[student] += 1

        remaining = len(sandwiches)

        for sandwich in sandwiches:
            if counts[sandwich] == 0:
                break
            if remaining == 0:
                break
            counts[sandwich] -= 1
            remaining -= 1


        return remaining

solution = Solution()

students1 = [1,1,1,0,0,1]
sandwiches1 = [1,0,0,0,1,1]

students2 = [1,1,0,0]
sandwiches2 = [0,1,0,1]

print(solution.countStudents(students2, sandwiches2))
print(solution.countStudents(students1, sandwiches1))