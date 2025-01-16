class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length()) {
            return false;
        }

        map<char,int> s1Freq;
        map<char,int> s2Freq;

        // initialize counts for first window
        for (int i = 0; i < s1.length(); i++) {
            s1Freq[s1[i]]++;
            s2Freq[s2[i]]++;
        }

        int matches = 0;
        //compare initial counts
        for (char c = 'a'; c <= 'z'; c++) {
            if (s1Freq[c] == s2Freq[c]) {
                matches++;
            }
        }

        // left ptr
        int l = 0;
        // right ptr
        for (int r = s1.length(); r <= s2.length(); r++) {
            if (matches == 26) {
                return true;
            }

            // add new char to window
            s2Freq[s2[r]]++;
            if (s2Freq[s2[r]] == s1Freq[s2[r]]) {
                matches++;
            }
            else if(s2Freq[s2[r]] - s1Freq[s2[r]] == 1) {
                matches--;
            }

            // remove leftmost char from window
            s2Freq[s2[l]]--;
            if (s2Freq[s2[l]] == s1Freq[s2[l]]) {
                matches++;
            }
            else if (s1Freq[s2[l]] - s2Freq[s2[l]] == 1){
                matches--;
            }
            l++;
        }

        return false;
    }
};
