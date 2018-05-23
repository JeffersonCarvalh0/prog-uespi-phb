# include <iostream>
# include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    string word, new_word = "";
    char ch;
    cin >> word;

    for (auto &cur_char : word) {
        ch = cur_char;
        if (ch < 'a') ch += 32;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y') continue;
        else  { new_word += '.'; new_word += ch; }
    }

    cout << new_word << '\n';

    return 0;
}
