#include<bits/stdc++.h>
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minId = 0, maxId = 0;
        for(int i = 1;i<n;i++){
            if (nums[i] < nums[minId]) minId = i;
            if(nums[i] > nums[maxId]) maxId = i;

        }
        if(minId > maxId) swap(minId,maxId);
        int front = maxId+1;
        int back = n - min(minId,maxId);
        int both = (minId+1) + (n-maxId);
        return min({front,back,both});
    }
};