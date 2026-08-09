class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {

        vector<string> ans;

        int n = words.size();
        int i = 0;

        while (i < n) {

            int j = i;
            int lineLength = 0;

            while (j < n &&
                   lineLength + words[j].length() + (j - i) <= maxWidth) {

                lineLength += words[j].length();
                j++;
            }

            int numberOfWords = j - i;
            int spaces = maxWidth - lineLength;

            string line = "";

            if (j == n || numberOfWords == 1) {

                for (int k = i; k < j; k++) {

                    line += words[k];

                    if (k < j - 1)
                        line += ' ';
                }

                while (line.length() < maxWidth)
                    line += ' ';
            }

            else {

                int gaps = numberOfWords - 1;

                int spacesPerGap = spaces / gaps;
                int extraSpaces = spaces % gaps;

                for (int k = i; k < j; k++) {

                    line += words[k];

                    if (k < j - 1) {

                        int spacesToAdd = spacesPerGap;

                        if (k - i < extraSpaces)
                            spacesToAdd++;

                        line += string(spacesToAdd, ' ');
                    }
                }
            }

            ans.push_back(line);

            i = j;
        }

        return ans;
    }
};