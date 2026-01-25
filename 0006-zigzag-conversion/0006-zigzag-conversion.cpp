class Solution {
public:
    string convert(string s, int numRows) {
        // Special case
        if (numRows == 1 || numRows >= s.length())
            return s;

        string ans = "";
        int cycle = 2 * (numRows - 1);

        for (int row = 0; row < numRows; row++) {
            for (int i = row; i < s.length(); i += cycle) {
                // vertical character
                ans.push_back(s[i]);

                // diagonal character (only for middle rows)
                int diag = i + cycle - 2 * row;
                if (row != 0 && row != numRows - 1 && diag < s.length()) {
                    ans.push_back(s[diag]);
                }
            }
        }
        return ans;
    }
};
