class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int missing = 0;

        stack<char> tube;

        for(int i =0 ; i<s.size(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' ){
                tube.push(s[i]);
            }

            if(s[i]==')' || s[i]=='}' || s[i]==']' ){
                if(!tube.empty()){
                    tube.pop();
                }else{
                    missing++;
                }
            }
        }


        return missing + tube.size();
    }
};