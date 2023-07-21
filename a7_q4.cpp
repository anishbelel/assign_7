#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int findMinimumSumOfDifferentElements(const vector<int>& a, const vector<int>& b) {
    int minSum = numeric_limits<int>::max();
    int n = a.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                int sum = a[i] + b[j];
                minSum = min(minSum, sum);
            }
        }
    }

    return minSum;
}

int main() {
    int n;
    cout << "Enter the size of the arrays (1 < size < 101): ";
    cin >> n;

    if (n < 2 || n > 100) {
        cout << "Invalid size. Please enter a size between 2 and 100." << endl;
        return 1;
    }

    vector<int> a(n);
    vector<int> b(n);

    cout << "Enter " << n << " integers for array a: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "Enter " << n << " integers for array b: ";
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    int minSum = findMinimumSumOfDifferentElements(a, b);
    cout << "Minimum sum of two elements from different arrays and not at the same index: " << minSum << endl;

    return 0;
}

