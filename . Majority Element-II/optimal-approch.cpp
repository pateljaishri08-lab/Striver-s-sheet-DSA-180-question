
class Solution {
public:
    vector<int> majorityElementTwo(vector<int>& nums) {

        int n = nums.size();

        int el1 = 0, el2 = 0;
        int cnt1 = 0, cnt2 = 0;

        // First pass: Find candidates
        for (int i = 0; i < n; i++) {

            if (cnt1 == 0 && nums[i] != el2) {
                el1 = nums[i];
                cnt1++;
            }
            else if (cnt2 == 0 && nums[i] != el1) {
                el2 = nums[i];
                cnt2++;
            }
            else if (nums[i] == el1) {
                cnt1++;
            }
            else if (nums[i] == el2) {
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        // Second pass: Verify candidates
        cnt1 = 0;
        cnt2 = 0;

        for (int x : nums) {
            if (x == el1) cnt1++;
            else if (x == el2) cnt2++;
        }

        vector<int> ans;

        if (cnt1 > n / 3)
            ans.push_back(el1);

        if (cnt2 > n / 3)
            ans.push_back(el2);

        sort(ans.begin(), ans.end());

        return ans;
    }
};