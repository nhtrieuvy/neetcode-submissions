class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            if(mp.count(nums[i])) return {mp[nums[i]], i};
            int compensa = target - nums[i];
            mp[compensa] = i;
        }
        return {0, 0};
    }
};
