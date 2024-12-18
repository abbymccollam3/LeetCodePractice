class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        int maxVal = INT_MIN;

        int left = 0;
        int right = n - 1;
        int area;

        while (left < right) {
            int w = right - left;
            if (height[left] < height[right]) {
                area = height[left]*w;
                left++;
            }
            else {
                area = height[right]*w;
                right--;
            }
            maxVal = max(maxVal, area);
        }

        return maxVal;
    }
};
