#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using namespace std;
int kthsmallest(vector<vector<int>>& matrix, int n, int k) {
    // Use min heap to efficiently find the smallest elements
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Runtime Complexity: O(n + k * log(n))
    for (int i = 0; i < n; ++i) {
        minHeap.push(matrix[i][0]);
    }
    for (int i = 0; i < k - 1; ++i) {
        int smallest = minHeap.top();
        minHeap.pop();
        int row = 0;
        while (row < n && matrix[row][0] != smallest) {
            row++;
        }
        if (row < n && matrix[row].size() > 1) {
            minHeap.push(matrix[row][1]);
            matrix[row].erase(matrix[row].begin());
        }
    }
}