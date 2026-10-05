class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        
            long long val=1,i=rowIndex;
            for(int j=0;j<=rowIndex;j++)
            {
                ans.push_back(val);
                val=val*(i-j)/(j+1);
            }
            return ans;
        
        
    }
};