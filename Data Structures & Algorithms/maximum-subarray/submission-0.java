class Solution {
    public int maxSubArray(int[] nums) {
        int currSum = 0;
        int MaxSum = Integer.MIN_VALUE;

        for(int val : nums){
            currSum += val;
            MaxSum = Math.max(currSum , MaxSum);
        
        if(currSum < 0){
            currSum = 0;
        }
        }
        return MaxSum;
    }
}
    