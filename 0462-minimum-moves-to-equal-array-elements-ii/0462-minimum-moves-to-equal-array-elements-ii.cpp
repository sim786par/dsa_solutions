class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int mid = (n-1)/2;
        int steps=0;
        for(int i=0;i<mid;i++){
            steps += nums[mid] - nums[i];
        }
        for(int i=mid+1;i<n;i++){
            steps += nums[i] - nums[mid];
        }
        return steps;
    }
};