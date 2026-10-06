class Solution {
public:
    int addDigits(int num) {
        if(num == 0)
            return 0;

        return 1 + (num - 1) % 9;
    }
};

// class Solution {
// public:
//     int addDigits(int num) {
//         if(sizeof(num)==1)return num;
//         string nums = to_string(num);
        
//         while(nums.size()!=1){
//             int sum =0;
//             for(char c:nums){
//                 int digit = c-'0';
//                 sum+=digit;
//             }
//             nums = to_string(sum);
//         }
//         int res = nums[0]-'0';
//         return res;
//     }
// };
