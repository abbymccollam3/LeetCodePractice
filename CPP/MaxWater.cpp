class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();

        int maxVal = INT_MIN;
        int area;
        int w;
        
        // starting with the first n
        // check to see if it can form a box

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                w = j-i;
                if (height[i] < height[j]) {
                    area = height[i]*w;
                }
                else {
                    area = height[j]*w;
                }
                maxVal = max(maxVal, area);
            }
        }

        // if yes, find the volume and compare to max volume
        return maxVal;
    }
};