class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumArr1 = 0;
        for(int i = 0; i < n; i++) {
            sumArr1 += nums[i];
        }
        int sumTotal = (n * (n + 1)) / 2;
        int missingNo = sumTotal - sumArr1;
        return missingNo;
    }
};