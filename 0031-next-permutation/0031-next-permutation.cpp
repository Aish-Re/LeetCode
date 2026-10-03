class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakPoint = -1;
        int n = nums.size();

        for (int i = n-2; i >= 0; i--){
            if (nums[i] < nums[i+1]) {
                breakPoint = i;
                break;
            }
        }

        if (breakPoint == -1){
            sort(nums.begin(), nums.end());
            return;
        }

        for (int j = n - 1; j > breakPoint; j--){
            if (nums[j] > nums[breakPoint]) {
                swap(nums[j], nums[breakPoint]);
                break;
            }
        }

        reverse(nums.begin() + breakPoint + 1, nums.end());

        return;
    }
};