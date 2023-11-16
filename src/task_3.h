/*
 * Author: Muhammad Xayrullayev
 * Date: 16.11.2023
 * Name: Muhammad Xayrullayev
 */
#include <iostream>
#include <vector>

using namespace std ;

void rearrangeSoldiers(vector<int> & soldiers) {
    int n = soldiers.size();

    for(int i ; i < n - 1 ; i += 2) {
        swap(soldiers[i] , soldiers[i + 1]) ;
    }

    if (n % 2 != 0) {

    }
    
}

int task_3() {
    vector<int> soldiers = {1, 2, 3, 4, 5, 6, 7};
    cout << "Original lineup of soldiers:" << endl;
    for (const int& soldier : soldiers) {
        cout << soldier << " ";
    }
    cout << endl;

    rearrangeSoldiers(soldiers);

    cout << "\nRearranged lineup of soldiers:" << endl;
    for (const int& soldier : soldiers) {
        cout << soldier << " ";
    }
    cout << endl;

    return 0;
}
