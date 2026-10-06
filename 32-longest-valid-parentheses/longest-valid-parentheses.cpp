class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int> tube;
        tube.push(-1); 
        int max_len = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                tube.push(i); 
            } else {
                tube.pop(); 
                
                if (tube.empty()) {
                    tube.push(i); 
                } else {
                    max_len = max(max_len, i - tube.top());
                }
            }
        }
        return max_len;
    }
};