class Solution {
public:
    bool checkString(string s) {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            {
                if((i!=0)&& s[i-1]=='b') return false;
            }
        }
        return true;
        
    }
};