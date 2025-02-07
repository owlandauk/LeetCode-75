class Solution {
public:
    string reverseVowels(string s) {
        string word = s;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u',
                                      'A', 'E', 'I', 'O', 'U'}; // hash map
        vector<int> positions;
        vector<char> vowels_str;
        int start = 0, end = s.size() - 1;
        // 双指针
        while (start < end) {
            while (start < end && vowels.count(s[start]) == 0) { // 一直寻找vowel
                start++;
            }
            while (start < end && vowels.count(s[end]) == 0) { // 一直寻找vowel
                end--;
            }
            swap(word[start], word[end]);
            start++;
            end--;
        }
        return word;

 /*       for (int i = 0; i < s.size(); i++) {
            if (vowels.count(s[i])) {
                positions.push_back(i);
                vowels_str.push_back(s[i]);
            }
        }
        reverse(vowels_str.begin(), vowels_str.end());
        for (int i = 0, k = 0; i < s.size() && k < positions.size(); i++) {
            if (i == positions[k]) {
                s[i] = vowels_str[k];
                k++;
            }
        }
        */
    }
};
