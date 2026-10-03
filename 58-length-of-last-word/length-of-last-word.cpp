class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = (int)s.length() - 1;
        int n = 0;

        while (i >= 0 && s[i] == ' ') {   
            i--;
        }
        while (i >= 0 && s[i] != ' ') {  
            n++;
            i--;
        }
        return n;
    }
};