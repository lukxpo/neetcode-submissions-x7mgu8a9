class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> letter_count(26);
        for (char c : s) {
            letter_count[c - 97] += 1; 
        }
        for (char c : t) {
            letter_count[c - 97] -= 1; 
        }
        for (int letter : letter_count) {
            if (letter != 0)
                return false;
        }

        return true;
    }
};
