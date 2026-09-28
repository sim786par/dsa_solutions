class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        unordered_map<string, string> mp;

        for(auto &p : knowledge) {
            mp[p[0]] = p[1];
        }

        string ans;

        for(int i = 0; i < s.size(); ) {

            if(s[i] != '(') {
                ans += s[i];
                i++;
            }
            else {
                i++; // skip '('

                string key;

                while(s[i] != ')') {
                    key += s[i];
                    i++;
                }

                i++; // skip ')'

                if(mp.find(key) != mp.end())
                    ans += mp[key];
                else
                    ans += '?';
            }
        }

        return ans;
    }
};