class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;           // no need to check further
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(t == s) return true;
        return false;
    }
};