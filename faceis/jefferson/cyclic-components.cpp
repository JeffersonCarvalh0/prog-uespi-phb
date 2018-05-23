// WA, fails on test case 9

# include <iostream>

using namespace std;

inline int abs(int a) { return a > 0 ? a : -a; }

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, w, a[1000], current, ways = -1, initial = 0;

    cin >> n >> w;
    for (int i = 0; i < n; ++i) cin >> a[i];

    for (int i = 0; i < n; ++i) initial += a[i];
    initial = initial < 0 ? abs(initial) : 0;
    if (a[0] < 0 && abs(a[0]) > initial) initial = abs(a[0]);

    for (int i = 0; current <= w && current >= 0; ++i, ++ways) {
        current = initial + i;
        for (int j = 0; j < n && current <= w && current >= 0; ++j) current += a[j];
        if (i == 0 && current > w) break;
    }
    cout << ways << '\n';
}
