class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans();
        int sum = 0;
        int sumTotal = (n*(n + 1))/2;
        sort(nums.begin(), nums.end());
        int duplicate;
        for (int i = 0; i < n - 1; i++) {
            sum += nums[i]; 
            if (nums[i] == nums[i + 1]) {
                duplicate = nums[i];
            }
        }
        sum += nums[n - 1];
        int missingNo = sumTotal - (sum - duplicate);
        return{duplicate, missingNo};
    }
};
