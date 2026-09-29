class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count(26, 0);

        for (char task : tasks) {
            count[task - 'A']++;
        }

        priority_queue<int> pq;

        for (int freq : count) {
            if (freq > 0) {
                pq.push(freq);
            }
        }

        int time = 0;

        while (!pq.empty()) {
            vector<int> temp;

            for (int i = 0; i <= n; i++) {
                if (!pq.empty()) {
                    int freq = pq.top();
                    pq.pop();

                    freq--;

                    if (freq > 0) {
                        temp.push_back(freq);
                    }

                    time++;
                }
                else {
                    if (temp.empty())
                        break;

                    time++;
                }
            }

            for (int freq : temp) {
                pq.push(freq);
            }
        }

        return time;
    }
};