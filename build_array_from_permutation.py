class Solution(object):
    def buildArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ret=[]
        for index, item in enumerate(nums):
            ret.append(nums[nums[index]])

        return ret
