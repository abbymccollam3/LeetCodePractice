class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string filtered;

        // getting rid of all extra characters
        for (int i = 0; i < n; i++) {
            if (isalnum(s[i])) {
                filtered += tolower(s[i]);
            }
        }
        
        // reverse string and compare with og string
        string reversed = filtered;
        reverse(filtered.begin(), filtered.end());

        return reversed == filtered;

    }
};
