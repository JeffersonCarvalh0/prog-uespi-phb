# include <iostream>
# include <algorithm>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, a[100], max_here = 0, max_so_far = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (n == 1 && a[0] == 1) { cout << 0 << '\n'; return 0; }
        max_here += a[i] ? -1 : 1;
        if (max_here < 0) max_here = 0;
        max_so_far = max(max_so_far, max_here);
    }

    if (all_of(a, a + n, [](int i) { return i == 1; })) cout << n - 1 << '\n';
    else cout << max_so_far + count(a, a + n, 1) << '\n';

    return 0;
}
