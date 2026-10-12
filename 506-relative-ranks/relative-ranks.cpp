class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sscore= score;
        sort(sscore.rbegin(),sscore.rend()); 
        unordered_map<int,string> mpp;
        
        for(int i=0;i<sscore.size();i++)
        {
            if(i==0)
             mpp[sscore[0]]="Gold Medal";
            else if(i==1)
             mpp[sscore[1]]="Silver Medal";
            else if(i==2)
             mpp[sscore[2]]="Bronze Medal"; 
            else
             mpp[sscore[i]]=to_string(i+1); 
        }
        vector<string> ans;
        for(auto it: score)
        {
            ans.push_back(mpp[it]);

        }
        return ans;


        
    }
};