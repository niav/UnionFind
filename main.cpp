// Union find algorithms, implementation divided by classes. Dynamic connectivity problem solving.
#include <iostream>
#include "algo.h"

int main() {
    int sz = 160;
    auto *arr = new int[sz];
    int cnt = 250;
    for (int i = 0; i < sz; ++i) {
        arr[i] = i + 2 * cnt--;
        std::cout << arr[i] << ' ';
    }

    auto *arrStr = new std::string[3];
    for (int i = 0; i < 3; ++i) {
        arrStr[i] = makeRandomString(10);
        std::cout << arrStr[i] << ' ';
    }


    // std::cout << std::endl;
    // chrono::Timer t;
//    for (int i = 0; i < sz; ++i) {
//        std::cout << arr[i] << ' ';
//    }

//    int k;
//    int p;
//    int q;
//    const int N = 10;
//    int arr_sz = N - 1;
//    QuickFind UnionFind(N); //to choose which algorithm to use just replace class name
//    // &uncomment corresponding header
//
//    k = 0; // iteration counter
//    do {
//        // array elements to compare, selected by user input
//        do {
//            cout << "\nType number of the first element to check... Number should be from 0 to " << arr_sz << "!\n";
//            cin >> p;
//            cout << "Type number of the second element to check... Number should be from 0 to " << arr_sz << "!\n";
//            cin >> q;
//        } while (p > arr_sz || q > arr_sz || p < 0 || q < 0);
//        if (UnionFind.connected(p, q))
//            cout << "Elements connected\n";
//        else {
//            cout << "Elements not connected\n";
//            UnionFind.elem_union(p, q);
//            cout << "Connecting " << p << " and " << q << "\n";
//        }
//        UnionFind.print_array();
//        k++;
//    } while (k < N);
//
//    cout << "\nComparing ended.\n";

    return 0;
}

