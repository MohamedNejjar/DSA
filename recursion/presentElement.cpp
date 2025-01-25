#include <bits/stdc++.h>
using namespace std;

int printElements(int arr[], int n, int start, int end) {
    if (start >= end) {
        return -1;
    }
    for(int i = start; i < end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main() {
    cout << "Hello World" << endl;
    return 0;
}