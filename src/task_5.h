#include <iostream>
#include <bits/stdc++.h>

//Runtime complexity:O(n),where N is the size of the array

using namespace std;

vector<int> kMostFrequentElements(vector<int>& nums, int k) {
    unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }
    priority_queue<pair<int, int>> maxHeap;
    for (auto& entry : freqMap) {
        maxHeap.push({entry.second, entry.first});
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }
    vector<int> result;
    while (!maxHeap.empty()) {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}

int task_5 () {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    vector<int> result = kMostFrequentElements(nums, k);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}