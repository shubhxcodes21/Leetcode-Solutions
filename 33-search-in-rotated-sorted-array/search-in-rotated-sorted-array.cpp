class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, high = nums.size() - 1, mid;
        while (left <= high) {
            mid = left + (high - left) / 2;
            if (nums[mid] == target)
                return mid;

            if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid])
                    high = mid - 1;   
                else
                    left = mid + 1;
            }
    
            else {
                if (nums[mid] < target && target <= nums[high])
                    left = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};