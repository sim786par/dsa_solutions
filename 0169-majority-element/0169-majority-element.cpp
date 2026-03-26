class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        int j= nums.size()/2;
        for(auto it : mp){
            if(it.second > j)  return it.first;
        }
        return 0;
    }
};