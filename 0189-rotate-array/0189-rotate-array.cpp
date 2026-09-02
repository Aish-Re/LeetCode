class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        std::reverse(nums.end() - k ,nums.end());
        std::reverse(nums.begin(), nums.end() - k);
        std::reverse(nums.begin(), nums.end());
    }
};