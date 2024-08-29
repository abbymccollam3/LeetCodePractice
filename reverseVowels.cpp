class Solution {
public:
    string reverseVowels(string s) {

        vector<char> word;
        for (char c: s) {
            word.pushback(c);
        }

        // now you have a word vector 

        for (int i = 0; i < word.length(); i++) {
            if (word[i] == 'a' || 'A' || 'e' || 'E' || 'i' || 'I' || 'o' || 'O' || 'u' || 'U' ||) {
                vowels.push_back(i); // ex) vector like {1, 4}
            }
        }
        
        for (int j = word.length(); j = 0; j--) {
            if (word[j] == 'a' || 'A' || 'e' || 'E' || 'i' || 'I' || 'o' || 'O' || 'u' || 'U' ||) {
                vowels.push_back(j); // ex) vector like {1, 4}
            }
        }

        swap(word[])

        return result;
        
    }
};