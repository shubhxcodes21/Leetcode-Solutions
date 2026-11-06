class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it: nums)
        {
            mpp[it]++;
        }
        int x= nums.size()/3;
        vector<int> ans;
        for(auto it: mpp)
        {
            if(it.second > x)
             ans.push_back(it.first);
        }
        return ans;
        
    }
};