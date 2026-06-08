class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> s1(nums1.begin(),nums1.end());                  //set to store unique occurance 
      unordered_set<int> ans;
      for(int x : nums2){
        if(s1.count(x)){    //check if nums2 element are there in nums1
            ans.insert(x);
        }
      }
      return vector<int>(ans.begin(),ans.end());       //convertion of set into vector
    }
};