# include <iostream>

using namespace std;

int search(int *vec, int n, int value) {
    int l, r, m, prev_m;
    l = 1; r = n; m = (l+r)/2; prev_m = -1;

    while (m != prev_m) {
        prev_m = m;
        if (value == vec[m]) return m;
        if (value < vec[m]) r = m;
        if (value > vec[m]) l = m;
        m = (l + r) / 2;
    }
    return r;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, a[100001], m, q[100000];

    cin >> n;
    a[0] = 0;
    for (int i = 1; i <= n; ++i) { cin >> a[i]; a[i] += a[i - 1]; }
    cin >> m;
    for (int i = 0; i < m; ++i) cin >> q[i];

    for (int i = 0; i < m; ++i) cout << search(a, n, q[i]) << '\n';

    return 0;
}
