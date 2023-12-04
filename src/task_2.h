#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int maxbeautifulness(int n, vector<int>& Y) {
    int beautifulness = 0;
    for (int i = 0; i < n; ++i) {
        beautifulness += abs(Y[i] - (i + 1));
    }
    for (int i = 0; i < n - 1; ++i) {
        swap(Y[i], Y[i + 1]);
        int newBeautifulness = 0;
        for (int j = 0; j < n; ++j) {
            newBeautifulness += abs(Y[j] - (j + 1));
        }
        beautifulness = max(beautifulness, newBeautifulness);
        swap(Y[i], Y[i + 1]);
    }

    return beautifulness;
}
int task_2 () {
    int n;
    cin >> n;

    vector<int> Y(n);
    for (int i = 0; i < n; ++i) {
        cin >> Y[i];
    }

    // Runtime Complexity: O(n)
    int result = maxBeautifulness(n, Y);

    cout << result << endl;

    return 0;
}