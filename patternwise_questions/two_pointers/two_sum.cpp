sort(nums.begin(), nums.end());

int l = 0;

int r = nums.size() - 1;

while (l < r) {

    int sum = nums[l] + nums[r];

    if (sum == target) {
        return true;
    }
    else if (sum < target) {
        l++;
    }
    else {
        r--;
    }
}

return false;

// Time Complexity: O(nlogn) + O(n) = O(nlogn)
// Space Complexity: O(1)


#return the indices of the two numbers such that they add up to a specific target.

        vector<pair<int,int>> arr;

        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        while(left < right) {
            int sum = arr[left].first + arr[right].first;

            if(sum == target) {
                return {arr[left].second, arr[right].second};
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
};

// Time Complexity: O(nlogn) + O(n) = O(nlogn)
// Space Complexity: O(n)


//simple method 

class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n = num.size();
        int i = 0, j = n - 1;

        while (i < j) {
            int sum = num[i] + num[j];

            if (sum == target) {
                return {i + 1, j + 1}; 
            }

            if (sum < target) {
                i++;
            } else {
                j--;
            }
        }

        return {};
    }
};

time complexity: O(nlogn) + O(n) = O(nlogn)
space complexity: O(1)