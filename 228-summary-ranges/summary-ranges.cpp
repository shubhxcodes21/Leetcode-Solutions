class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> qs;
        string s;
        for (int i = 0; i < nums.size(); i++)
        {
            s = "";
            int start = nums[i];
            while (i+1<nums.size() && (nums[i+1] == nums[i]+ 1))
            {
                i++;
            }
            if (nums[i] != start)
                s = to_string(start) + "->" + to_string(nums[i]);
            else
                s = to_string(start);
            qs.push_back(s);
        }
        return qs;
    }
};