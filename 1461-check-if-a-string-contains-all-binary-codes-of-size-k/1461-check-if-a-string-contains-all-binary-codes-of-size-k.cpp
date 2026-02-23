
class Solution {
public:
    bool hasAllCodes(std::string s, int k) {
        if (s.size() < (1 << k)) {
            return false;
        }

        std::unordered_set<std::string> codeSet;
        for (int i = 0; i <= s.size() - k; i++) {
            codeSet.insert(s.substr(i, k));
        }

        return codeSet.size() == (1 << k);
    }
};