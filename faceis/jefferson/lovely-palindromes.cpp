# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string n;
    cin >> n;

    cout << n;
    for (auto it = n.rbegin(); it != n.rend(); ++it) cout << *it;
    cout << '\n';

    return 0;
}
