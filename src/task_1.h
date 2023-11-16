/*
 * Author: Muhammad Xayrullayev
 * Date: 16.11.2023
 * Name: Muhammad Xayrullayev
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<string>& books) {
    int n = books.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (books[j] > books[j + 1]) {
                swap(books[j], books[j + 1]);
            }
        }
    }
}

int task_1() {
    vector<string> books = {"The Catcher in the Rye", "To Kill a Mockingbird", "1984", "Brave New World", "Fahrenheit 451"};

    cout << "Original list of books:" << endl;
    for (const string& book : books) {
        cout << book << endl;
    }

    bubbleSort(books);

    cout << "\nSorted list of books:" << endl;
    for (const string& book : books) {
        cout << book << endl;
    }

    return 0;
}
