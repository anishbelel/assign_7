#include <iostream>
using namespace std;

int findSumOfGreatestAndSmallest(int arr[], int n) {
    int smallest = arr[0];
    int greatest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > greatest) {
            greatest = arr[i];
        }
    }

    return smallest + greatest;
}

int main() {
    int n;
    cout << "Enter the size of the array (1 < size < 101): ";
    cin >> n;

    if (n < 2 || n > 100) {
        cout << "Invalid size. Please enter a size between 2 and 100." << endl;
        return 1;
    }

    int arr[100]; 

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = findSumOfGreatestAndSmallest(arr, n);
    cout << "Sum of the greatest and smallest integers: " << sum << endl;

    return 0;
}
