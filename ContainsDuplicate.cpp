class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map <int, int> myMap;
        for (int i : nums) {
            myMap[i]++;
        }

        for (const auto& entry : myMap) {
            if(entry.second > 1) {
                return true;
            }
        }

        return false;
    }
};
