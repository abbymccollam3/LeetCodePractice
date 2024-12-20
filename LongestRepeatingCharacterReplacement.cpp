class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        int n = s.size();
        map<char,int> myMap;
        int left = 0;
        int i = 0;
        int maxFreq = 0;
        int winLen = 0;

        // while moving pointer is less than length
        while (i < n) {
            winLen = i-left+1;
            // store char in map
            myMap[s[i]]++;
            // find most frequent character
            for (const auto& entry : myMap) {
                maxFreq = max(maxFreq, entry.second);
            } 
            // if window length minus most frequent entry
            // occurance is less than or equal to k
            if (winLen - maxFreq <= k) {
                ans = max(ans,winLen);
            }
            else {
                myMap[s[left]]--;
                left++;
            }
            i++;
        }
            
        return ans;
    }
};
