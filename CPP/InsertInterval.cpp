class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        int i = 0;
        int n = intervals.size();
        vector<vector<int>> merged;

        while (i < n && intervals[i][1] < newInterval[0]) {
            merged.push_back(intervals[i]);
            i++;
        }

        while (i < n && intervals[i][0] <= newInterval[1]) {
            // find minimum of column 0 and maximum of column 1
            int minI = min(intervals[i][0], newInterval[0]);
            int maxI = max(intervals[i][1], newInterval[1]);
            newInterval = {minI, maxI}; 
            i++;
        }

        merged.push_back(newInterval);
        
        while (i < n) {
            merged.push_back(intervals[i]);
            i++;
        }

        return merged;
    }
};
