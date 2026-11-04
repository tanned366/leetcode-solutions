
class Solution {
public:
    int findMaximizedCapital(int k, int w,
                             vector<int>& profits,
                             vector<int>& capital) {

        // Min heap: {required capital, profit}
        priority_queue<pair<int, int>,
                       vector<pair<int, int>>,
                       greater<pair<int, int>>> minHeap;

        // Max heap: maximum available profit
        priority_queue<int> maxHeap;

        int n = profits.size();

        // Store projects in min heap
        for (int i = 0; i < n; i++) {
            minHeap.push({capital[i], profits[i]});
        }

        // Select at most k projects
        for (int i = 0; i < k; i++) {

            // Add all affordable projects
            while (!minHeap.empty() &&
                   minHeap.top().first <= w) {

                maxHeap.push(minHeap.top().second);
                minHeap.pop();
            }

            // No affordable project available
            if (maxHeap.empty()) {
                break;
            }

            // Choose maximum profit
            w += maxHeap.top();
            maxHeap.pop();
        }

        return w;
    }
};
