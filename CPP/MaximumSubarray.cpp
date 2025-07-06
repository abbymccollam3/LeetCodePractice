class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // Initialize variables to store the current sum and the max sum
        int currentSum = 0;
        int maxSum = INT_MIN; // Smallest possible integer

        // Loop through the array to find the maximum subarray sum
        for (int i = 0; i < nums.size(); i++) {
            // Add the current element to the running sum
            currentSum += nums[i];
            
            // Update maxSum if currentSum is greater
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            // If currentSum becomes negative, reset it to 0
            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        // Return the maximum subarray sum found
        return maxSum;
    }
};
