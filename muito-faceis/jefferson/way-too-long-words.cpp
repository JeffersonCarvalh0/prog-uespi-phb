# include <iostream>
# include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, size;
    string word;

    cin >> n;
    while (n--) {
        cin >> word;
        size = word.size();
        if (size > 10) cout << word[0] << size - 2 << word[size - 1] << '\n';
        else cout << word << '\n';
    }

    return 0;
}
