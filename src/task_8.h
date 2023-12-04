#include <iostream>
#include <vector>

using namespace std;
// Runtime Complexity: O(n)
int findMissingNumber(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }
    return expectedSum - actualSum;
}

int task_8 () {
    int n;
    cin >> n;

    vector<int> nums(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> nums[i];
    }
    int result = findMissingNumber(nums);
    cout << result << endl;

    return 0;
}