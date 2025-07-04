class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0; i<nums.size(); i++) {
            st.insert(nums[i]);
        }
        int idx=0;
        for(auto it: st){
            nums[idx++] = it;
        }
        return idx;
    }
};

// Optimal
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j] > nums[i]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};
