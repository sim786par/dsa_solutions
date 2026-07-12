class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> swap = arr;
        sort(swap.begin(),swap.end());
        swap.erase(unique(swap.begin(),swap.end()),swap.end());
        for(int i=0;i<arr.size();i++){
            arr[i] = lower_bound(swap.begin(),swap.end(),arr[i]) - swap.begin()+1;
        }
        return arr;
    }
};