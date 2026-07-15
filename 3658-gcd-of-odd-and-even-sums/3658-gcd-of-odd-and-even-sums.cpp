class Solution {
public:
    int gcdOfOddEvenSums(int n) {
    //Approach 1 O(n) first sum of odd and even then find gcd
        // int sumodd = 0,sumeven =0,i=1;
        // while(i != 2*n){
        //     if(i%2 == 0){
        //         sumeven +=i;
        //     }
        //     else {
        //         sumodd = sumodd + i;
        //     }
        //     i++;
        // }
        // while(sumodd != 0){
        //     int temp = sumodd;
        //     sumodd = sumeven % sumodd;
        //     sumeven = temp;
        // }
        // return sumeven;

    //Approach 2 mathematical O(1) sum of odd = n^2 sum of even = n(n-1) gcd(n^2,n(n-1)) = gcd(n,n-1) and consecutive no is co prime so result n hi hoga
        return n;
    }
};