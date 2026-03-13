#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int x : arr) {
        if (x == 1) {
            cout << "HARD\n";
            return 0;
        }
    }

    cout << "EASY\n";
    return 0;
}

