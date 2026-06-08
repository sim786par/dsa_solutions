class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>ans(n,INT_MAX);
        int start=0,end=n-1;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==pivot) continue;
            if(nums[i]<pivot)
            {
                ans[start]=nums[i];
                start++;
            }
            else
            {
                ans[end]=nums[i];
                end--;
            }
        }
        reverse(ans.begin()+end+1,ans.end());
        for(int i=0;i<n;i++)
        {
            if(ans[i]==INT_MAX)
            {
                ans[i]=pivot;
            }
        }
        return ans;
    }
};