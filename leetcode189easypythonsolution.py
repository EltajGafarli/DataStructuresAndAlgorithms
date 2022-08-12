class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        k = k % len(nums)
        y = nums[len(nums) - k:] + nums[:len(nums) - k]
        nums.clear()
        nums.extend(y)
