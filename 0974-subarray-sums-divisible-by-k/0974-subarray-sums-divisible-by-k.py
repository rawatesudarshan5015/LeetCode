class Solution(object):
    def subarraysDivByK(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        count = 0
        map = {0:1}
        sum = 0
        for i in nums:
            sum +=i

            if sum%k in map:
                count += map[sum%k]
            map[sum%k] = map.get(sum%k,0)+1
            


        return count

        