class Solution {
    public int maxArea(int[] heights) {
        int n = heights.length;
        int ans = 0;
        int left = 0;
        int right = n-1;
        while(left < right){
            int width = right - left;
            int minHeight = Math.min(heights[left] , heights[right]);
            int area = width * minHeight;
            ans = Math.max(ans , area);

            if(heights[left] < heights[right]) {
                left++;
            }else{
                right--;
            }
        }
        return ans;
    }
}
