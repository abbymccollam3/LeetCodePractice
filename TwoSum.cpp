class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> element;
        int n = nums.size();
        int i, j = 0;

        for (i = 0; i < n-1; i++) {
            for (j = i+1; j < n; j++) {
                int sum = nums[i]+nums[j];
                if (sum == target) {
                    return {i,j};
                }
            }
        }

    return {};
    }
};
