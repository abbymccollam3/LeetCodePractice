class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // place magazine into a map
        unordered_map<char, int> myMap;

        for (char c : magazine) {
            myMap[c]++;
        }

        for (char c : ransomNote) {
            // see if any characters in ransomNote match characters in myMap
            // if we find c, decrement the value of the key
            if(myMap.find(c) != myMap.end() && myMap[c] > 0) {
                myMap[c]--;
            }
            else {
                return false;
            }
        }

        return true;
    }
};
