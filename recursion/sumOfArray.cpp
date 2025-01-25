#include <iostream>


int sumOfArray(int arr[], int size) {
    if (size <= 0) {
        return 0;
    }
    return arr[size - 1] + sumOfArray(arr, size - 1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int result = sumOfArray(arr, 5);
    std::cout << "The sum of the array elements is: " << result << std::endl;
    return 0;
}