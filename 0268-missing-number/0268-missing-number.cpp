// this is brute force approach n^2 
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n= nums.size();
//         for(int i=0;i<n;i++){
//             int found = false;
//             for(int j=0;j<n;j++){
//                 if(nums[j] == i){
//                     found = true;
//                     break;
//                 }
//             }
//             if(!found){
//                 return i;
//             }

//         } 
//         return nums.size();
//     }
// };

// using sort function nlogn
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=0;i < nums.size();i++){
//             if(i != nums[i]){
//                 return i;
//             }
//         }
//         return nums.size();
//     }
// };

// optimized solution using x-or operation O(n)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int ans = 0;
        for(int i=0;i<=n;i++){
            ans ^=i;
        }
        for(int num : nums){
            ans ^=num;
        }
        return ans;
    }
};
