class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> mapS(256, -1);
        vector<int> mapT(256, -1);

        for (int i = 0; i < s.length(); i++) {
            char a = s[i];
            char b = t[i];

            if (mapS[a] != -1 && mapS[a] != b)
                return false;

            if (mapT[b] != -1 && mapT[b] != a)
                return false;

            mapS[a] = b;
            mapT[b] = a;
        }

        return true;
    }
};