class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> mySet;
        int maxSub = 0;
        int n = s.length();
        int i = 0;
        int left = 0;

        while (i < n) {
            // cannot find the letter of index i
            if (mySet.find(s[i]) == mySet.end()) {
                mySet.insert(s[i]); // add the letter to the set
                maxSub = max(maxSub, i-left+1);
                i++;
            }
            else {
                mySet.erase(s[left]);
                left++;
            }
        }

        return maxSub;
    }
};
