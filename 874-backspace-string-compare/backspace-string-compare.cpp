class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> tube1;
        stack<char> tube2;

        //first string

        for(int i =0; i<s.size(); i++){
            if(s[i] == '#'){
                if(!tube1.empty()){
                    tube1.top();
                    tube1.pop();
                }
                }else{
                    tube1.push(s[i]);
                }
        }


        //second loop

        for(int i =0; i<t.size(); i++){

            if(t[i]== '#'){
                if(!tube2.empty()){
                    tube2.top();
                    tube2.pop();
                }
                }
                else{
                    tube2.push(t[i]);
            }

        }


        return tube1 == tube2;



    }
    
};