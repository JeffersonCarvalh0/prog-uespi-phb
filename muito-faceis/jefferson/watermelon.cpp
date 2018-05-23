# include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    if (n >= 4 && !(n & 1)) cout << "YES\n"; else cout << "NO\n";

    return 0;
}
