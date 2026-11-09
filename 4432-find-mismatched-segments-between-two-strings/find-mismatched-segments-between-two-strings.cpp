class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;
        int n=s1.length();
        int i=0;
        while (i<n) {
            if (s1[i]==s2[i]) {
                i++;
                continue;
            }
            int j=i;
            while (i<n && s1[i]!=s2[i]) 
             i++;
            ans.push_back({s1.substr(j, i-j),s2.substr(j, i-j)});
        }
        return ans;
    }
};