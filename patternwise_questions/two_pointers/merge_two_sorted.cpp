class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> result;

        int i = 0;
        int j = 0;

        // Compare elements from both arrays
        while (i < m && j < n) {

            if (nums1[i] <= nums2[j]) {
                result.push_back(nums1[i]);
                i++;
            }
            else {
                result.push_back(nums2[j]);
                j++;
            }
        }

        // Add remaining elements from nums1
        while (i < m) {
            result.push_back(nums1[i]);
            i++;
        }

        // Add remaining elements from nums2
        while (j < n) {
            result.push_back(nums2[j]);
            j++;
        }

        // Copy result back into nums1
        for (int k = 0; k < m + n; k++) {
            nums1[k] = result[k];
        }
    }
};