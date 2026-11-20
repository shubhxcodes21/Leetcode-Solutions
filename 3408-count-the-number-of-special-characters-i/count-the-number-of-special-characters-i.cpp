class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> low(26,false);
        vector<bool> up(26,false);
        for (char ch :word)
        {
            if (islower(ch)) 
             low[ch-'a']=true;
            else 
             up[ch-'A']=true;
        }
        int ans=0;
        for (int i=0;i<26;i++){
            if (low[i] && up[i])
             ans++;
        }
        return ans;
    }
};