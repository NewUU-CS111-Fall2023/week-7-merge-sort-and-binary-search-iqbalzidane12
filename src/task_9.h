#include <iostream>
#include <vector>

using namespace std;

int findKthPositive(const vector<int>& arr, int k) {
    // Time complexity: O(n), where n is the length of the input array arr
    // Space complexity: O(1)
    
    int missingCount = 0;
    int currentNum = 1;
    int i = 0;

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == currentNum) {
        
            i++;
        } else {
    
            missingCount++;
        }
        currentNum++;
    }
    return currentNum - 1;
}

int task_9 () {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findKthPositive(arr, k);
    cout << result << endl;

    return 0;
}