class Solution {
public:
    vector<int> getRow(int r) {
        int result = 1;
        vector<int> row;
        row.push_back(result);

        for (int i = 1; i < r; i++) {
            result = result * ( r - i);
            result = result / i;
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