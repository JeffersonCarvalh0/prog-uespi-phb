# include <iostream>
# include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int A1, A2, A3, a, b, c;

    cin >> A1 >> A2 >> A3;

    b = sqrt((A3 * A2) / A1);
    c = A2 / b;
    a = A1 / c;

    cout << 4 * (a + b + c) << '\n';

    return 0;
}
