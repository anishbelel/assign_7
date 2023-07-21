#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
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

   
    reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
