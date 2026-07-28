class Solution {
    public boolean hasDuplicate(int[] nums) {
        Map<Integer , Integer> map = new HashMap<>();
        for(int a : nums){
           if(map.containsKey(a)){
                return true;
            }
            else{
                map.put(a , 1);
            }
        }
        return false;
    }
}