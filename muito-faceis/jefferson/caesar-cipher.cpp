# include <iostream>
# include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, k;
    string s;
    cin >> n >> s >> k;

    for (auto &ch : s) {
        if (ch >= 'A' && ch <= 'Z') cout << char(((ch - 'A' + k) % 26) + 'A');
        else if (ch >= 'a' && ch <= 'z') cout << char(((ch - 'a' + k) % 26) + 'a');
        else cout << ch;
    }
    cout << '\n';
    return 0;
}
