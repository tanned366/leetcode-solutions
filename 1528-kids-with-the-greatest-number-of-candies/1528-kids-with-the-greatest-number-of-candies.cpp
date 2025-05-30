class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector<bool> ans;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] > max) {
                max = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++) {
            if ((candies[i] + extraCandies) >= max) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = 0;
        for (int candy : candies)
            maxCandy = max(candy, maxCandy);
        vector<bool> ans(candies.size(), false);
        for (int i = 0; i < candies.size(); i++)
            if ((candies[i] + extraCandies) >= maxCandy)
                ans[i]=true;
        return ans;
    }
};
