// LEETCODE -189
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> ans(size);

        for(int i = 0; i < size; i++) {
            int newindex = (i + k) % size;
            ans[newindex] = nums[i];
        }

        nums = ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Solution sol;

    cout << "Before rotation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    sol.rotate(nums, k);

    cout << "After rotation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
