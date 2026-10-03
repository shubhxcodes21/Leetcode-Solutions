class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<10)
            {
            if(nums[i]==i)
            {
                return i;
            }
            }
            else if(nums[i]>=10)
            {
                int sum=0;
                while(nums[i]>0)
                {
                    int d= nums[i]%10;
                    sum+=d;
                    nums[i]/=10;
                }
                if(sum==i)
                 return i;

            }
        }
        return -1;
        
    }
};