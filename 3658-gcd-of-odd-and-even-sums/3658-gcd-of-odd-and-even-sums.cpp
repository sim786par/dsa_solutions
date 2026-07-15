class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0,sumeven =0,i=1;

        while(i != 2*n){
            if(i%2 == 0){
                sumeven +=i;
            }
            else {
                sumodd = sumodd + i;
            }
            i++;
        }
        while(sumodd != 0){
            int temp = sumodd;
            sumodd = sumeven % sumodd;
            sumeven = temp;
        }
        return sumeven;
    }
};