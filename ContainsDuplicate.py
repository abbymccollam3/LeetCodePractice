class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # create a set
        my_set = set()

        # add nums to set
        for i in nums:
            if i in my_set:
                return True
            print(i)
            my_set.add(i)
        
        return False
        # if num is in set, return false