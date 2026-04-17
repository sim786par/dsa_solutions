class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());                   //always use sort in 3sum ques
        int n = nums.size();
        int closest = nums[0]+nums[1]+nums[2];;
        for(int i=0;i<n-2;i++){
            int left = i+1;
            int right = n-1;
            while(left <right){
                int sum = nums[i]+nums[left]+nums[right];
                if(abs(target-sum)<abs(target-closest)){              //compare between the closness of sum to target and closest to target and then update it
                    closest =sum;
                }
                if(sum<target) left++;
                else if(sum > target) right--;
                else{return sum;}                 //return exact match
            }
        }
        return closest;
    }
};