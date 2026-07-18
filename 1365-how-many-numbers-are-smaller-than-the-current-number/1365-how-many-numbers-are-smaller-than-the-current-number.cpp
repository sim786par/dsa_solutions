class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> demo;
        demo = nums;
        sort(demo.begin(),demo.end());
        
        unordered_map<int,int> mp;
        for(int i=0;i<demo.size();i++){
            if(mp.find(demo[i]) == mp.end()){
                mp[demo[i]] = i;
            }
        
        }
        vector<int> ans;
        for(int x: nums){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};