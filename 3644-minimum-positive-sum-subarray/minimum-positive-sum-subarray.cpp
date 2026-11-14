class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int min=INT_MAX,sum=0;
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(abs(i-j)+1>=l && abs(i-j)+1<=r && sum<min && sum>0)
                {
                 min=sum;
                 flag=true;
                }

            }
            sum=0;
        }
        if(flag)
         return min;
        else
         return -1;
        
    }
};