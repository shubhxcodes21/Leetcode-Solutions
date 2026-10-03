class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        string a = "";
        for (int i = 0; i < s.length(); i++) {
            size_t pos = a.find(s[i]);
            if (pos != string::npos) {
                a.erase(0, pos + 1);   
            }
            a += s[i];                 
            res = max(res, (int)a.length());
        }
        return res;
    }
};