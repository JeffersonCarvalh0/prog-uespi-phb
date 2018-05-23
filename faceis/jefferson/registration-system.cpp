# include <iostream>
# include <map>
# include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    string name;
    map<string, int> database;

    cin >> n;
    while (n--) {
        cin >> name;
        if (database.find(name) == database.end()) { database.insert(make_pair(name, 0)); cout << "OK\n"; }
        else cout << name + to_string(++database[name]) << '\n';
    }

    return 0;
}
