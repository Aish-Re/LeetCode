class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int r = rowIndex;
        long long result = 1;

        vector<int> row;
        row.push_back(result);

        for (int c = 1; c <= r; c++) {
            result = result * ( r + 1 - c);
            result = result / c;
            row.push_back(result);
        }
        return row;
    }
};