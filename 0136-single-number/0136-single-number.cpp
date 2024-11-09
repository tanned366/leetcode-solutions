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
