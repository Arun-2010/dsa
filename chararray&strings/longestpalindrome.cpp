class Solution {
public:
    int longestPalindrome(string s) {
        int sumodd = 0, sumeven = 0;
        bool oddFound = false;  // flag to check if any odd count exists
        
        unordered_map<char, int> count;
        for (char ch : s) {
            count[ch]++;
        }
        
        for (const auto& entry : count) {
            if (entry.second % 2 == 0) {
                sumeven += entry.second;
            } else {
                sumodd += entry.second - 1;  // add the largest even part
                oddFound = true;             // mark that odd count exists
            }
        }
        
        if (oddFound) sumodd += 1;  // add one odd character in the middle
        
        int totalcount = sumodd + sumeven;
        return totalcount;
    }
};