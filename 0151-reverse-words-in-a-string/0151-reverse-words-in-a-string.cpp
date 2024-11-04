class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        reverse(s.begin(), s.end());    // revere the whole string
        string ans = "";
        for(int i=0; i<n; i++) {        // for every character in string
            string word = "";
            while(i < n && s[i] != ' ') {    // until space is encountered or str length is completed 
                word += s[i];            // store every word separately
                i++;
            }
            reverse(word.begin(), word.end());    // reverse the word
            if(word.length() > 0) {            // checking if a string is empty because if it is it will cause error and print space
                ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};
