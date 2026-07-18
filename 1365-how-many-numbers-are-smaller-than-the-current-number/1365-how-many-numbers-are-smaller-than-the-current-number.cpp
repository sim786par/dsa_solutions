class Solution {
public:
    // vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    //     vector<int> demo;
    //     demo = nums;
    //     sort(demo.begin(),demo.end());
        
    //     unordered_map<int,int> mp;
    //     for(int i=0;i<demo.size();i++){
    //         if(mp.find(demo[i]) == mp.end()){
    //             mp[demo[i]] = i;
    //         }
        
    //     }
    //     vector<int> ans;
    //     for(int x: nums){
    //         ans.push_back(mp[x]);
    //     }
    //     return ans;
    // }

    //Approach 2
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       vector<int>count(101,0);
       for(int num:nums) {
        count[num]++;
       }
       for(int i=1;i<101;i++) {
        count[i]+=count[i-1];
       }
       vector<int>ans;
       for(int num:nums) {
        if(num==0) {
            ans.push_back(0);
        } else {
            ans.push_back(count[num-1]);
        }

       }
       return ans;
    }
};