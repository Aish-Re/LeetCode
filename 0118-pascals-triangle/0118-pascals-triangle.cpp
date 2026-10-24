class Solution {
public:
    long long getCell (int r, int c) {
        long long result = 1;

        for (int i = 0; i < c; i++) {
            result = result * (r - i);
            result = result / (i + 1);
        }
        return result;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        int r = numRows;

        for (int i = 0; i < r; i++) {
            vector<int> row;
            for (int j = 0; j <= i; j++) {
                row.push_back(getCell(i,j));
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};