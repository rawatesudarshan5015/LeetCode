import heapq
class Solution(object):
    def shortestSubarray(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        sum =0
        n = len(nums)
        count = n+1
        pq=[(0,0)]
        for i in range(n):
            sum += nums[i]
            while pq and sum - pq[0][0]>=k:
                temp = heapq.heappop(pq)
                count = min(count,i+1-temp[1])
            heapq.heappush(pq,(sum,i+1))

        return count if count != n + 1 else -1


        
        