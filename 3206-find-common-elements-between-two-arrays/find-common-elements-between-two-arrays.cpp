class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int c1=0,c2=0;
        for(int i=0;i<nums1.size();i++)
        {
            int t= nums1[i];
            auto it= find(nums2.begin(),nums2.end(),t);
            if(it != nums2.end())
             c1++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            int t= nums2[i];
            auto it= find(nums1.begin(),nums1.end(),t);
            if(it != nums1.end())
             c2++;
        }
        vector<int> ans={c1,c2};
        return ans;
    }
};