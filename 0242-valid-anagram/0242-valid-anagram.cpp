class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;           // no need to check further
        }
        int count[26] = {0};
        for(int i=0; i<s.length(); i++) {
            int idx = s[i] - 'a';       // to find idx of character
            count[idx]++;
        }
        for(int i=0; i<t.length(); i++) {
            int idx = t[i] - 'a';
            if(count[idx] == 0) {
                return false;
            }
            count[idx]--;
        }
        return true;
    }
};

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
