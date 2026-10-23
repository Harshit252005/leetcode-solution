class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int freq[128]={0};
        int l=0;
        int max_len = 0;

        for(int r = 0; r<s.length();r++){
            while(freq[s[r]]>0){
                freq[s[l]]--;
                l++;
            }

            freq[s[r]]++;
            max_len = max(max_len, r-l+1);
        
        }

        return max_len;
    }
};