# include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, res;
    cin >> n;

    res = n;
    for (int i = n-1, j = 2; i > 0; --i, ++j) res += (i * j) - (j - 1);
    cout << res << '\n';

    return 0;
}
