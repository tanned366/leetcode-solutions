#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;  // Index for the compressed list
        
        for (int i = 0; i < n; ) {
            char ch = chars[i];  // Current character
            int count = 0;
            
            // Count the occurrences of the current character
            while (i < n && chars[i] == ch) {
                count++;
                i++;
            }
            
            // Store the character
            chars[idx++] = ch;
            
            // If the count is greater than 1, convert the count to string and store each digit
            if (count > 1) {
                string str = to_string(count);
                for (char dig : str) {
                    chars[idx++] = dig;
                }
            }
        }
        
        // Resize the array to the new length and return it
        chars.resize(idx);
        return idx;
    }
};
