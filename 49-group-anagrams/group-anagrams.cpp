class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        for(string s: strs){
            string orig=s;
            sort(orig.begin(),orig.end());
            mpp[orig].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto c: mpp)
         ans.push_back(c.second);
        return ans;
        
    }
};