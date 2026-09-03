class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = -1;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                i++;
                nums[i] = nums[j];
            }
        }

        for (int k = i+1; k < nums.size(); k++) {
            nums[k] = 0;
        }
    }
};