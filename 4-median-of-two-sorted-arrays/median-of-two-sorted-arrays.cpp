class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int a = 0, b = 0;
        vector<int> ans;
        for (int i = 0; i <= (n + m) / 2; i++) {
            if (a < n && (b >= m || nums1[a] <= nums2[b])) {
                ans.push_back(nums1[a++]);
            } else {
                ans.push_back(nums2[b++]);
            }
        }
        int k = (n + m) / 2;
        if ((n + m) % 2 == 0)
            return (ans[k - 1] + ans[k]) / 2.0;
        return ans[k];
    }
};