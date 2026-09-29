class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> athletes; 

        for (int i = 0; i < n; ++i) {
            athletes.push_back({score[i], i});
        }

        sort(athletes.begin(), athletes.end(), greater<pair<int, int>>());

        vector<string> answer(n);
        for (int i = 0; i < n; ++i) {
            string rank;
            if (i == 0) rank = "Gold Medal";
            else if (i == 1) rank = "Silver Medal";
            else if (i == 2) rank = "Bronze Medal";
            else rank = to_string(i + 1);

            answer[athletes[i].second] = rank;
        }

        return answer;
    }
};