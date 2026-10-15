
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        int second = INT_MIN;

        for (int i = n - 1; i >= 0; i--) {
            // Found the smallest number of a 132 pattern
            if (nums[i] < second) {
                return true;
            }

            // Current number can become the "3"
            while (!st.empty() && st.top() < nums[i]) {
                second = st.top();
                st.pop();
            }

            st.push(nums[i]);
        }

        return false;
    }
};
