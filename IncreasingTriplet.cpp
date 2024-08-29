class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int length = nums.size();
        bool result;
        int location;
        int location1;

        int first = nums[0];

        // finding smallest number
        for (int i = 0; i < length; i++) {
            if (nums[i] < first) {
                first = nums[i];
                location = i;
            }
            else {
                location = i;
            }
        }
        
        // seeing if any value to the right is greater
        for (int j = location+1; j < length; j++) {
            if (nums[j] > nums[location]) {
                location1 = j;
                for (int k = location1 + 1; k < length; k++) {
                    if (nums[k] > nums[location1]) {
                        result = true;
                    }
                    else {
                        result = false;
                    }
                }
            }
        }

        return result;
    }
};