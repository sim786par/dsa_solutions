class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int y = n;                              //n in y so thst no change in n
        while(y > 0){
            int x = y % 10;                    //remainder of num
            rev = rev*10 + x;                  //reverse
            y = y /10;
        }
        return abs(n-rev);
    }
};