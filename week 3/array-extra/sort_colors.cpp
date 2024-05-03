//LEETCODE Q NO. -> 75

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int i = 0;

        while (i <= right) {
            if (nums[i] == 0) {
                swap(nums[i], nums[left]);
                left++;
                i++;
            }

            else if (nums[i] == 2) {
                swap(nums[i], nums[right]);
                right--;
            }

            else {
                i++;
            }
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution sol;
    
    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sol.sortColors(nums);

    cout << "After sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
