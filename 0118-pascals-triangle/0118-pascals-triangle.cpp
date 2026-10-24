class Solution {
public:
    vector<int> getRow (int r) {
        vector<int> row;
        int result = 1;

        row.push_back(result);

        for (int c = 1; c < r; c++) {
            result = result * ( r - c );
            result = result / c;
            row.push_back(result);
        }
        return row;
    }

    vector<vector<int>> generate(int numRows) {
        int r = numRows;

        vector<vector<int>> triangle;

        for (int i = 0; i < r; i++) {
            triangle.push_back(getRow(i + 1));
        }
        return triangle;
    }
};