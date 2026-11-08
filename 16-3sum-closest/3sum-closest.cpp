class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=0;
        long ans=INT_MAX;
        for(int i=0;i<nums.size()-2;i++)
        {
            int j= i+1;
            int k= nums.size()-1;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-ans))
                 ans=sum;
                if(ans==target)
                 return ans;
                else if(sum<target) 
                 j++;
                else if(sum>target)
                 k--;
            }
        }
        return ans;
        
        
    }
};