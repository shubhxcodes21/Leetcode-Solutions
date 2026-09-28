class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        for(int i=0;i<s.length();i++)
        {
            map[s[i]]++;
        }
        string ans="";
        int maxfreq=0;
        char maxchar;
        while(!map.empty())
        {
            for(auto it: map)
            {
                if(it.second> maxfreq)
                {
                    maxfreq= it.second;
                    maxchar=it.first;
                }
            }
            while(maxfreq--)
             ans.push_back(maxchar);

            map.erase(maxchar);

        }
        return ans;
        
    }
};