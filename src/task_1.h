/*
 * Author:20221500484
 * Date:12/4/2023
 * Name:Muxtorov Abdulaziz SSE3
 */
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
long long calculateremainingsum(int N, vector<int>& arr) {
    sort(arr.begin(), arr.end());
    long long sum = 0;
    for (int i = 2; i < N; i += 2) {
        sum += arr[i];
    }

    return sum;
}
int task_1 () {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        // Runtime Complexity: O(N log N) due to sorting
        long long result = calculateRemainingSum(N, arr);

        cout << result << endl;
    }

    return 0;
}