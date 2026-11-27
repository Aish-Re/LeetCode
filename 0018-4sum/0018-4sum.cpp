class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                unordered_set<long long> hs;
                for (int k = j + 1; k < n; k++) {
                    long long l = (long long)target - ((long long)nums[i] + nums[j] + nums[k]);

                    if (hs.find(l) != hs.end()) {
                        vector<int> quad = {nums[i], nums[j], nums[k], (int)l};
                        sort(quad.begin(), quad.end());
                        st.insert(quad);
                    }

                    hs.insert(nums[k]);
                }
            }
        }

        vector<vector<int>> ans (st.begin(), st.end());
        return ans;
    }
};