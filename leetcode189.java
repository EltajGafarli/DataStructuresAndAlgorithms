class Solution {
  
  public void rotate(int[] nums, int k) {
    int len = nums.length;
    k = k % len;
    reverse(nums,0,len - 1);
    reverse(nums,0,k - 1);
    reverse(nums,k,len  - 1);
  }
  // 1 2 3 4 5 6
  // 6 5 4 3 2 1
  // 4 5 6  1 2 3
  static void reverse(int [] nums,int start,int end){
    while(start < end){
      int temp = nums[start];
      nums[start ++] = nums[end];
      nums[end --] = temp; 
    }
  }
}
