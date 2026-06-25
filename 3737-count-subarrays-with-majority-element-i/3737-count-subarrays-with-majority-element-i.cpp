class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int count =0;
        
        int n = nums.size();
        for(int i=0;i<n;i++){
            int tempcount = 0;

            for(int j=i;j<n;j++){
                if(nums[j]== target){
                    tempcount ++;
                }
                if(tempcount > (j-i+1)/2) count++;
            } 
        }
        return count;
    }
};