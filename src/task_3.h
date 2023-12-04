#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> mergearrays(int N, int M, vector<int>& A, vector<int>& B) {
    int i = 0, j = 0;
    vector<int> result;

    // Runtime Complexity: O(N + M)
    while (i < N && j < M) {
        if (A[i] >= B[j]) {
            result.push_back(A[i]);
            i++;
        } else {
            result.push_back(B[j]);
            j++;
        }
    }

     while (i < N) {
        result.push_back(A[i]);
        i++;
    }
    while (j < M) {
        result.push_back(B[j]);
        j++;
    }

    return result;
}
int task_3 () {
        int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N), B(M);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < M; ++i) {
            cin >> B[i];
        }

        // Runtime Complexity: O(N + M)
        vector<int> result = mergeArrays(N, M, A, B);
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}