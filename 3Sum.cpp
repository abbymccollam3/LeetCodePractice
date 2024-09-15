class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end()); // sort vectors numerically
        vector<vector<int>> sumUp;
        int n = nums.size();
        set <vector<int>> s;
        
        // need to find what numbers add to 0
        for (int i = 0; i < n; i++) {

            int j = i+1;
            int k = n-1;

            while (j<k) {
                int sum = nums[i]+nums[j]+nums[k];

                if (sum == 0) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    k--;
                }

            }
        }

        for (auto i : s) {
            sumUp.push_back(i);
        }

        return sumUp;
    }
};
