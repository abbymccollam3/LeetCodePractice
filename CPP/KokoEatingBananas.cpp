class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size();
        sort(piles.begin(), piles.end());

        // cannot eat all bananas in time
        if (n > h) return 0;
            
        else if (n == h) {
            return piles[n-1];
        }

        int l = 1; 
        int r = piles[n-1]; 
        while (l < r) {
            int mid = l + ((r-l)/2); // 6
            // if canFinish, try smaller speed
            if (canFinish(mid, piles, h)) r = mid;
            else l = mid+1;
        }
        return l;
    }

    bool canFinish(double mid, vector<int>& piles, int h) {
        int hours = 0;
        for (int p : piles) {
            if (p < mid) {
                hours++;
            }
            else {
                int temp = ceil(p/mid);
                hours += temp;
            }
        }

        if (hours > h)  return false;
        return true;
    }
};
