class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        for(int num : nums){
            minHeap.offer(num);       // adding in minHeap;
            if(minHeap.size() > k){
                minHeap.poll();       // removing the value from minHeap;
            }
        }
        return minHeap.peek(); 
    }
}
