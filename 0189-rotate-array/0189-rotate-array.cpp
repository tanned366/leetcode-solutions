class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1) {
            cout<<nums[0];
            return;
        }
        if(k>nums.size()) k=k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        for(auto it: nums){
            cout<<it;
        }
    }
};