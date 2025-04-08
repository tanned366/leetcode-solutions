class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int runningSum = 0;
        for (auto num : nums) {
            runningSum += num;
            ans.push_back(runningSum);
        }
        return ans;
    }
};
