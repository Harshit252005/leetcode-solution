class Solution {
public:
    int minAddToMakeValid(string s) {

        stack<char> tube;

        for(int i =0 ; i<s.size(); i++){
            if(s[i]==')' && !tube.empty() && tube.top()=='(') tube.pop();
            else tube.push(s[i]);
        }

        return tube.size();

    }
};