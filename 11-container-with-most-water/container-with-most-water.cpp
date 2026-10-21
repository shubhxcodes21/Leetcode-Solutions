class Solution {
public:
    int maxArea(vector<int>& height) {
        int a = 0, b = height.size() - 1, ans = 0;
        while (a < b) {
            int ar = (b - a) * min(height[a], height[b]);
            ans = max(ans, ar);
            if (height[a] < height[b])
                a++;
            else
                b--;
        }
        return ans;
    }
};