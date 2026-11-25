
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> temp;

        // Store elements of nums1
        for(int i = 0; i < m; i++) {
            temp.push_back(nums1[i]);
        }

        // Store elements of nums2
        for(int i = 0; i < n; i++) {
            temp.push_back(nums2[i]);
        }

        // Sort the combined array
        sort(temp.begin(), temp.end());

        // Copy back to nums1
        for(int i = 0; i < m+n; i++) {
            nums1[i] = temp[i];
        }
    }
};
