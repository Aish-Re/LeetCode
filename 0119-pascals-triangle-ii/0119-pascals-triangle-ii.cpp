class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int r = rowIndex;
        vector<int> row;

        long long result = 1;
        row.push_back(result);

        for (int i = 1; i <= r; i++) {
            result = result * (r - i + 1);
            result = result / i;
            row.push_back(result);
        }
        return row;
    }
};