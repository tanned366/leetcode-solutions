
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        vector<int> freq(26, 0);

        for (char task : tasks) {
            freq[task - 'A']++;
        }

        priority_queue<int> pq;

        for (int f : freq) {
            if (f > 0) {
                pq.push(f);
            }
        }

        // {remaining frequency, available time}
        queue<pair<int, int>> q;

        int time = 0;

        while (!pq.empty() || !q.empty()) {

            time++;

            // Execute the most frequent available task
            if (!pq.empty()) {

                int count = pq.top();
                pq.pop();

                count--;

                if (count > 0) {
                    q.push({count, time + n});
                }
            }

            // Check whether a task's cooldown is complete
            if (!q.empty() && q.front().second == time) {

                pq.push(q.front().first);
                q.pop();
            }
        }

        return time;
    }
};
