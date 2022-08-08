package Solution;

import java.io.*;
import java.lang.reflect.Array;
import java.util.*;

public class TwoSum{


    static int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer>map = new HashMap<>();
        int[] ans = new int[2];
        for(int i = 0;i<nums.length;i++){
            int diff = target - nums[i];
            if(map.containsKey(diff)){
                ans[0] = i;
                ans[1] = map.get(diff);
                if(ans[0] != ans[1]){
                    return ans;
                }
            }else {
                map.put(nums[i],i);
            }
        }
        return ans;
    }
    static void print(int[] nums){
        for(int i = 0;i<nums.length;i++){
            System.out.printf("%d ",nums[i]);
        }
        return;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int target = sc.nextInt();
        int[] nums = new int[n];
        for(int i = 0;i<n;i++){
            nums[i] = sc.nextInt();
        }
        print(twoSum(nums,target));
    }
}
