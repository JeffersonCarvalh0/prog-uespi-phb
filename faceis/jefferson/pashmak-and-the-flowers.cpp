# include <iostream>
# include <bitset>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, k, x[2000], friends = 0;

    cin >> n >> m >> k;
    bitset<32> cur; ++m;

    for (int i = 0; i < m; ++i) cin >> x[i];

    for (int i = 0; i < m - 1; ++i) {
        cur = x[m - 1] ^ x[i];
        if (cur.count() <= k) ++friends;
    }

    cout << friends << '\n';

    return 0;
}
