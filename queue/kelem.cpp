class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int>st;
        queue<int>ans;
        if (k > q.size())   // safeguard
            return q;
            
            
        while(k--){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            ans.push(st.top());
            st.pop();
        }
        
        while(!q.empty()){
            ans.push(q.front());
            q.pop();
        }
        return ans;
    }
};


question:-
Input: q = [1, 2, 3, 4, 5], k = 3
Output: [3, 2, 1, 4, 5]
Explanation: After reversing the first 3 elements from the given queue the resultant queue will be 3 2 1 4 5