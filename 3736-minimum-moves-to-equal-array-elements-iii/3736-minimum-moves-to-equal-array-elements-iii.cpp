class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        int x = *max_element(nums.begin(),nums.end());
        for(int num : nums){
            if(num !=x){
                int diff = x-num;
                count+=diff;
            }
        }
        return count;
    }
};