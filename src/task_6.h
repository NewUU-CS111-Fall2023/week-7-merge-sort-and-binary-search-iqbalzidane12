#include <iostream>
#include <vector>
// Runtime Complexity: O(log(N)), where N is the size of the array
using namespace std;
pair<int, int> searchInsertPosition(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
    
            return {1, mid};
        } else if (nums[mid] < target) {
        
            left = mid + 1;
        } else {
            
            right = mid - 1;
        }
    }
    return {-1, left};
}
int task_6 () {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cin >> target;
    pair<int, int> result = searchInsertPosition(nums, target);
    cout << result.first << " " << result.second << endl;

    return 0;
}