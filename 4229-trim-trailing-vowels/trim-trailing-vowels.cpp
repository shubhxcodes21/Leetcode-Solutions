class Solution {
public:
    string trimTrailingVowels(string s) {
        string v="aeiou";
        int n = s.size();
        for(int i = n-1; i>=0; i--){
            if(v.find(s[i]) != string ::npos){
                s.erase(i,1);
            }
            else break;
        }
        return s;
    }
};