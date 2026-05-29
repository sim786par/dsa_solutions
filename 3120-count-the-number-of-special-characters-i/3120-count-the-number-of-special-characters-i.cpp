class Solution {
public:
    int numberOfSpecialChars(string word) {
       vector<int> lower(26),upper(26);                   //two vectors for storing lower and upper char. we can use set 
       for(char ch : word){
        if(islower(ch)){
            lower[ch-'a'] = 1;         //if exists mark one on its position and position is calculated by ch-'a'
        }
        else{
            upper[ch-'A'] = 1;
        }
       }
       int count =0;
       for(int i = 0;i<26;i++){                               //loop for comparing and it will be used in both the vectors
        if(lower[i] && upper[i]) count++;          // if both places have 1 then count++
       }
       return count;
    }
};