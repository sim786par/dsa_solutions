class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int indx = 0;
        while(mp[0]--) {nums[indx++] = 0;}
        while(mp[1]--) {nums[indx++] = 1;}
        while(mp[2]--) {nums[indx++] = 2;}
    }
};