class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for(int i = 1; i < strs.size(); i++){
            while (res.size() > 0 && strs[i].find(res) != 0) {
                res.pop_back();
            }
        }
        return res;
    }
};