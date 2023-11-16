/*
 * Author: Muhammad Xayrullayev
 * Date: 16.11.2023
 * Name: Muhammad Xayrullayev
 */
#include <iostream>

int countElementsWithSmallerNeighbors(const int arr[], int size) {
    int count = 0;

    for (int i = 1; i < size - 1; ++i) {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
            count++;
        }
    }

    return count;
}

int task_4() {
    int array[] = {1, 3, 2, 5, 4, 7, 6};

    int result = countElementsWithSmallerNeighbors(array, sizeof(array) / sizeof(array[0]));

    std::cout << result << std::endl;

    return 0;
}
