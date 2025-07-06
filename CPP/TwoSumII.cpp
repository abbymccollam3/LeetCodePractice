class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    
        vector<int> sum;
        int left = 0;
        int right = numbers.size()-1;

        while (left < right) {
            int goal = target - numbers[left];
            if (numbers[right] > goal) {
                right --;
            }
            else if (numbers[right] == goal) {
                sum.push_back(left+1);
                sum.push_back(right+1);
                return sum;
            }
            else {
                left++;
            }

        }
        return sum;    
    }
};
