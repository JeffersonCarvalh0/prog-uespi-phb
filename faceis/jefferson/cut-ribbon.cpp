# include <iostream>
# include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, dp[4001], a, b, c;
    set<int> values;

    cin >> n >> a >> b >> c;
    values.insert(a); values.insert(b); values.insert(c);

    for (int i = 1; i <= n; ++i) dp[i] = -1e9;
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (auto j = values.begin(); j != values.end(); ++j) {
            if (i - *j >= 0 && dp[i - *j] + 1 >= dp[i]) dp[i] = dp[i - *j] + 1;
        }
    }

    cout << dp[n] << '\n';
}
