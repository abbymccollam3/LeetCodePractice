class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int maxKey = INT_MIN;
        int maxValue = INT_MIN;

        unordered_map<int, int> myMap;

        // put elements of array in map
        for (int i : nums) {
            myMap[i]++;
        }

        // Find the key with the maximum value
        for (const auto& entry : myMap) {
            if (entry.second > maxValue) {
                maxValue = entry.second;
                maxKey = entry.first;  // Update key with the highest count
            }
        }

        return maxKey;
        
    }
};
