class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        long long sum = 0;
        int l = 0;
        int maxFreq = 1;

        for (int r = 0; r < nums.size(); r++) {

            sum += nums[r];

            long long cost = (long long)nums[r] * (r - l + 1) - sum;

            while (cost > k) {
                sum -= nums[l];
                l++;

                cost = (long long)nums[r] * (r - l + 1) - sum;
            }

            maxFreq = max(maxFreq, r - l + 1);
        }

        return maxFreq;
    }
};