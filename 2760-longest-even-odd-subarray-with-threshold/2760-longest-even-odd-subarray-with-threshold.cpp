class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {

        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] % 2 != 0 || nums[i] > threshold)
                continue;

            int len = 1;
            int j = i + 1;

            while(j < nums.size() &&
                  nums[j] <= threshold &&
                  (nums[j] % 2 != nums[j-1] % 2)) {

                len++;
                j++;
            }

            ans = max(ans, len);
        }

        return ans;
    }
};