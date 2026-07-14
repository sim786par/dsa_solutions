class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 1,count=1;
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]+1){
                count++;
            }
            else count =1;
            ans = max(ans,count);
        }
        return ans;
    }
};