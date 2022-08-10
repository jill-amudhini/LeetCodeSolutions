class Solution(object):
    def numFactoredBinaryTrees(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        n = len(arr)
        dp = [1] * n
        arr.sort()
        numToIndex = {a: i for i, a in enumerate(arr)}

        for i, root in enumerate(arr):
            for j in range(i):
                if root % arr[j] == 0:
                    right = root // arr[j]
                    if right in numToIndex:
                        dp[i] += dp[j] * dp[numToIndex[right]]

        return sum(dp) % (10**9 + 7)
        