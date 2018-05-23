# include <iostream>
# include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    long long n, m, a, h, v;
    cin >> n >> m >> a;

    h = ceil(n / double(a));
    v = ceil(m / double(a));

    cout << h * v << '\n';

    return 0;
}
