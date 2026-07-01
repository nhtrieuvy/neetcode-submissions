class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }

        for(char c : t){
            freq[c]--;
        }
        
        for(auto &[key, value] : freq){
            if(value < 0) return false;
        }
        return true;
    }
};
