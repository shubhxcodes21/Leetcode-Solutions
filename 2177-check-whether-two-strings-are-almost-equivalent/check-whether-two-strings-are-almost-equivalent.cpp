class Solution {
public:
    bool checkAlmostEquivalent(string s, string t) {
        int c[26] = {};
        for (char ch:s) 
         c[ch-'a']++;
        for (char ch: t) 
         c[ch-'a']--;
        for (int i=0;i<26;i++){
            if (abs(c[i])>3) 
             return false;
        }
        return true;
    }
};