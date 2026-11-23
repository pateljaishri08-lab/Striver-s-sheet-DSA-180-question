class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        do {
            ans.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        // Find current permutation
        for (int i = 0; i < ans.size(); i++) {
            if (i + 1 < ans.size()) {
                nums = ans[i + 1];
                return;
            }
            
            
        }
    }
};