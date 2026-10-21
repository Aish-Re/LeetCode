class Solution {
public:
    long long getCell(int r, int c) {
        long long result = 1;

        for (int i = 0; i < c; i++) {
            result = result * (r - i);
            result = result / (i + 1);
        }
        return result;
    }

    vector<int> getRow(int rowIndex) {
        int r = rowIndex;
        vector<int> row;

        for (int c = 0; c <= r; c++) {
            row.push_back(getCell(r,c));
        }
        return row;
    }
};