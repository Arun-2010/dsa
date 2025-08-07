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




// optimal 
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);


   // freq
        for(int i=0;i<s.length();i++){
            if(s[i]>='a')
            lower[s[i]-'a']++;
            else
            upper[s[i]-'A']++;
        }
       int count=0;
       bool odd=0;

       for(int i=0;i<26;i++){
        //lower

        if(lower[i]%2==0)
        count+=lower[i];
        else{
        count+=lower[i]-1;
        odd=1;
       }
      //upper
      if(upper[i]%2==0)
        count+=upper[i];
        else{
        count+=upper[i]-1;
        odd=1;
       }

        
    }


    return count+odd;
    }
};