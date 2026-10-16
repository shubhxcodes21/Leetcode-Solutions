class Solution {
public:
    string trimTrailingVowels(string s) {
        string ans = "" , vowels = "aeiou";
        int j = -1;
        for (int i = s.size() - 1 ; i >= 0 ; i--) if (vowels.find(s[i]) == string::npos) {j = i; break;}
        for (int i = 0 ; i <= j ; i++) ans += s[i];
        return ans;
    }
};