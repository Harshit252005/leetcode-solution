class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;

        vector<int> s1_freq(26,0);
        vector<int> s2_freq(26,0);

        for(char c : s1){
            //array index for s1 freq
            s1_freq[c-'a']++;
        }

        //fixed window freq for s2
        int l =0;
        for(int r =0; r<s2.length(); r++){
            //array index for the s2 window freq
            s2_freq[s2[r]-'a']++;

            //braking condition

            if((r-l+1)>s1.length()){

                //too big move the l forward
                s2_freq[s2[l]-'a']--;
                l++;
            }

            //win condition
            if((r-l+1)==s1.length()){
                if(s1_freq == s2_freq){
                    return true;
                }
            }
        }

        return false;

        
    }
};