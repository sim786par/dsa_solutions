class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n= colors.size();
        int dist = 0;
        //compare from left to right (0 to n)
        for(int i = 0;i<n;i++){
            if(colors[i]!=colors[0]){
                dist = max(dist,i);
            }
        }
        //compare from right to left(n to 0)
        for(int i = n-1;i>=0;i--){
            if(colors[i]!=colors[n-1]){
                dist = max(dist,n-1-i);
            }
        }
        return dist;
    }
};