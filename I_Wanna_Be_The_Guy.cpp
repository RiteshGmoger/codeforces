#include <iostream>
using namespace std;

int main() {
    int n, p, q, t;
    cin >> n;

    bool arr[101] = {false};

    cin >> p;
    for (int i = 0; i < p; i++) {
        cin >> t;
        arr[t] = true;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> t;
        arr[t] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!arr[i]) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;
    return 0;
}

