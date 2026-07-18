class Solution {
public:
    int findGCD(vector<int>& nums) {
        // int minval = nums[0], maxval = nums[0];
        // for(int num : nums){
        //     minval = min(num,minval);
        //     maxval = max(maxval,num);
        // }
        // while(minval){
        //     int temp = minval;
        //     minval = maxval % minval;
        //     maxval = temp;
        // }
        // return maxval;
        int smallest = *min_element(nums.begin(),nums.end());
        int largest = *max_element(nums.begin(),nums.end());
        return __gcd(smallest,largest);
    }
};