class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        unique = []
        for i in nums:
            if i in unique:
                pass
            else:
                unique.append(i)
        n = sorted(unique)
        if len(n) < 3:
            return max(n)
        else:
            return n[-3]