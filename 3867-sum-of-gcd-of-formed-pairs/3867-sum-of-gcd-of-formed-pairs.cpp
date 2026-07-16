class Solution {
private:
    long long find_gcd(long long a, long long b){

        while(b){

            long long temp=b;
            b=a%b;
            a=temp;
        }

        return a;
    }

public:

    long long gcdSum(vector<int>& nums) {

        int n=nums.size();

        vector<long long> prefix(n);

        long long maxi=0;

        for(int i=0;i<n;i++){

            maxi=max(maxi,(long long)nums[i]);

            prefix[i]=find_gcd(nums[i],maxi);
        }

        sort(prefix.begin(),prefix.end());

        long long ans=0;

        int l=0;
        int r=n-1;

        while(l<r){

            ans+=find_gcd(prefix[l],prefix[r]);

            l++;
            r--;
        }

        return ans;
    }
};