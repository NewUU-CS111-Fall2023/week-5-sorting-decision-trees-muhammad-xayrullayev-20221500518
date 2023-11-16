/*
 * Author: Muhammad Xayrullayev
 * Date: 16.11.2023
 * Name: Muhammad Xayrullayev
 */
#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& denominations) {
    int n = denominations.size();

    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < n; ++j) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(denominations[i], denominations[minIndex]);
    }
}

int task_2() {
    vector<int> denominations = {50, 20, 10, 5, 1, 100, 200, 500};

    cout << "Original denominations:" << endl;
    for (const int& denomination : denominations) {
        cout << denomination << " ";
    }
    cout << endl;

    selectionSort(denominations);

    cout << "\nSorted denominations:" << endl;
    for (const int& denomination : denominations) {
        cout << denomination << " ";
    }
    cout << endl;

    return 0;
}
