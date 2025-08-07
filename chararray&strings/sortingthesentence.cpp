class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);  // assuming sentence has max 9 words
        string temp;
        int count = 0, index = 0;

        while (index < s.length()) {
            if (s[index] == ' ') {
                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
            } else {
                temp += s[index];
            }
            index++;
        }

        // process the last word
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        temp.clear();
        count++;

        // build the result
        string result;
        for (int i = 1; i <= count; i++) {
            result += ans[i];
            result += ' ';
        }
        result.pop_back();  // remove last space
        return result;
    }
};
