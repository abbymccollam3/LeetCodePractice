class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int i = 0;
        int notZero = 0;

        while (i < n) {
            if (nums[i] == target) {
                return i;
            }
            i++;
        }

        return -1;
    }
};
