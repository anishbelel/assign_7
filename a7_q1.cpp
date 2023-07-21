#include <iostream>
using namespace std;

void countOddEven(int arr[], int n) {
    int oddCount = 0;
    int evenCount = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of even integers: " << evenCount << endl;
    cout << "Number of odd integers: " << oddCount << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100]; 
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    countOddEven(arr, n);

    return 0;
}
