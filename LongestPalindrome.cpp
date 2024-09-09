class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char, int> myMap;
        int count = 0;
        bool flag = false;

        for (char c : s) {
            myMap[c]++;
        }

        for (auto& entry : myMap) {
            // if the letter has an even frequency
            if (entry.second%2 == 0) {
                count += entry.second;
            }
            // if the letter has an odd frequency
            else {
                count += entry.second -1;
                flag = true;
            }
        }

        return (flag) ? count + 1 : count;
    }
};
