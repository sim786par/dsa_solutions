class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> first;
        vector<int>second;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(i<n){
                first.push_back(nums[i]);
            }
            else{
                second.push_back(nums[i]);
            }
        }
        for(int i=0;i<n;i++){
            result.push_back(first[i]);
            result.push_back(second[i]);
        }
        return result;
    }
};