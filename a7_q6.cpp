#include <iostream>
using namespace std;

int findElement(int arr[], int n) {
    int leftMax = arr[0];
    int rightMin = arr[n - 1];

    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] > leftMax && arr[i] < rightMin) {
            return arr[i];
        }
        if (arr[i] > leftMax) {
            leftMax = arr[i];
        } else if (arr[i] < rightMin) {
            rightMin = arr[i];
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array (1 < n < 101): ";
    cin >> n;

    if (n < 2 || n > 100) {
        cout << "Invalid size. Please enter a size between 2 and 100." << endl;
        return 1;
    }

    int arr[100]; // Assuming the maximum size of the array is 100, you can change this accordingly.

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int element = findElement(arr, n);
    if (element != -1) {
        cout  << element << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
