
class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {

            // Avoid duplicate elements
            if (find(ans.begin(), ans.end(), nums[i]) != ans.end()) {
                continue;
            }

            int cnt = 0;

            for (int j = 0; j < n; j++) {

                if (nums[i] == nums[j]) {
                    cnt++;
                }
            }

            if (cnt > n / 3) {
                ans.push_back(nums[i]);
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};