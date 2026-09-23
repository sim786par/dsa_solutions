class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int l=0,r=n-1;
        int area=0,maxarea = -1;
        while(l<r){
            if(height[l]<height[r]){
                int width = r-l;
                area = height[l]* width;
                l++;
            }
            else{
                int width = r-l;
                area = height[r]* width;
                r--;
            }
            maxarea = max(area,maxarea);
        }
        return maxarea;
    }
};