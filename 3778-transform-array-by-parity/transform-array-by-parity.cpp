class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
             a++;
        }
        vector <int> ans(nums.size());
        fill(ans.begin(),ans.begin()+a,0);
        fill(ans.begin()+a,ans.end(),1);
        return ans;
        
        
    }
};