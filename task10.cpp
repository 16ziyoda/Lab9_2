#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<long long>> a(n, vector<long long>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    long long target = 0;
    for (int j = 0; j < n; ++j) target += a[0][j];

    for (int i = 0; i < n; ++i) {
        long long s = 0;
        for (int j = 0; j < n; ++j) s += a[i][j];
        if (s != target) { cout << "Not Magic Square\n"; return 0; }
    }

    for (int j = 0; j < n; ++j) {
        long long s = 0;
        for (int i = 0; i < n; ++i) s += a[i][j];
        if (s != target) { cout << "Not Magic Square\n"; return 0; }
    }

    long long d1 = 0, d2 = 0;
    for (int i = 0; i < n; ++i) {
        d1 += a[i][i];
        d2 += a[i][n - 1 - i];
    }
    if (d1 != target || d2 != target) {
        cout << "Not Magic Square\n";
        return 0;
    }

    cout << "Magic Square\n";
    return 0;
}
