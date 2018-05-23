# include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k, a[100], count = 0;

    cin >> n >> k;
    for (int i = 0; i < n; ++i) cin >> a[i];

    int i;
    for (i = k - 1; a[i] == a[k - 1]; ++i);
    for (int j = 0; j < i; ++j) if (a[j] > 0) ++count;
    cout << count << '\n';

    return 0;
}
