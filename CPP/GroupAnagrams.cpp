class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // sort all string in groupAnagrams
        vector<string> newStr;
        newStr = strs;
        vector<vector<string>> group;
        map<string,vector<int>> myMap;
        int n = strs.size();

        for (string& str : newStr) {
           sort(str.begin(), str.end());
        }

        // figure out what indexes have anagrams and store in map
        for (int i = 0; i < n; i++) {
            string value = newStr[i];
            myMap[value].push_back(i);
        }

        // add strings to vector
        for (const auto& entry : myMap) {
            // index is entry.second
            vector<string> temp; // temp vector
            for (int index : entry.second) {
                temp.push_back(strs[index]);
            }
            group.push_back(temp);
        }

        return group;
    }
};
