class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenword=0;
        bool counting = false;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] != ' '){
                lenword++;
                counting = true;
            } else if(counting){
                break;
            }
        }
        return lenword;
    }
};