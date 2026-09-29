class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> counts(26, 0);
        for (char task : tasks) {
            ++counts[task - 'A'];
        }

        int maxCount = *max_element(counts.begin(), counts.end());
        int maxCountTasks = count(counts.begin(), counts.end(), maxCount);

        return max(
            static_cast<int>(tasks.size()),
            (maxCount - 1) * (n + 1) + maxCountTasks
        );
    }
};