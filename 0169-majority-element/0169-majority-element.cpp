//Moore's ALgorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        for(int i=0; i<nums.size(); i++) {
            if(freq == 0) {
                ans = nums[i];
            }
            if(ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};

// Optimize (sortimg)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int freq = 1, ans = nums[0];
        for(int i=1; i<n; i++) {
            if(nums[i] == nums[i-1]) {
                freq++;
            }
            else {
                freq=1;
                ans = nums[i];
            }
            if(freq > n/2) {
                return ans;
            }
        }
        return ans;
    }
};

// Brute-Forece Approach
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int count = 0;
            for(int j=0; j<n; j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }
            if(count > (n/2)) {
                return nums[i];
            }
        }
        return -1;
    }
};
