class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int i=0;
        while(i<nums.size()){
            int comp = target - nums[i];
            if(mp.find(comp) != mp.end()){              //check that the complement of the i is present in map or not
                return {mp[comp],i};
            }
            mp[nums[i]] = i;    //store all element in map 
            i++;
        }
        return {};
    }
};