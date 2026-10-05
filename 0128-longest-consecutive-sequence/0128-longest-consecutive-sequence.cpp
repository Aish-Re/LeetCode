class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> st;

        int longest = 1;

        if (n == 0)
            return 0;

        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int count = 1;
                long long current = it;

                while (st.find(current + 1) != st.end()) {
                    count++;
                    current++;
                }

                longest = max(longest, count);
            }
        }
        return longest;
    }
};