class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest = 1, lastSmaller = INT_MIN, count = 1;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        if (n==0) 
            return 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == lastSmaller) {
                continue;
            }
            else if (nums[i] - 1 != lastSmaller) {
                count = 1;
                lastSmaller = nums[i];
            } else {
                count++;
                lastSmaller = nums[i];
            }

            longest = max(longest, count);
        }
        return longest;
    }
};