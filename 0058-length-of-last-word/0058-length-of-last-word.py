class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.split()
        return len(s[-1].strip())

# CPP Solution
class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenword = 0;
        int i = s.size() - 1;

        // Step 1: skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Step 2: count characters until space or start of string
        while (i >= 0 && s[i] != ' ') {
            lenword++;
            i--;
        }

        return lenword;
    }
};

# CPP-2

class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenword = 0;
        bool counting = false; // to check when last word starts

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                lenword++;
                counting = true; // started counting the last word
            } 
            else if (counting) {
                // we already started counting and hit a space
                break;
            }
            // else: still in trailing spaces — do nothing
        }

        return lenword;
    }
};
