class Solution {
public:
    // Function to calculate the squared distance
    int calculate(int x1, int y1) 
    {
        return x1 * x1 + y1 * y1;
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        // Step 1: Sort points by their squared distance from the origin
        sort (points.begin(), points.end(), [&](vector<int>& p1, vector<int>& p2) 
        {
            int dist1 = calculate(p1[0], p1[1]);
            int dist2 = calculate(p2[0], p2[1]);
            return dist1 < dist2; // Sort by ascending order of distance
        });

        // Step 2: Return the first k points after sorting
        return vector<vector<int>>(points.begin(), points.begin() + k);
    }
};
