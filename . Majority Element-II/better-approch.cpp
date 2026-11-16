
class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {

        int n = nums.size();

        unordered_map<int, int> mp;
        vector<int> ans;

        // Count frequency
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        // Check majority elements
        for (auto it : mp) {

            if (it.second > n / 3) {
                ans.push_back(it.first);
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};