class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int val : nums) {    //(int i=0; i<nums.size(); i++) 
            ans = ans ^ val;     //int val = nums[i];
        }
        return ans;
    }
};


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n-1; i+=2) {
            if(nums[i] != nums[i+1]) return nums[i];
        }
        return nums[n-1];
    }
};
