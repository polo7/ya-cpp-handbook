#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (a < b+c && b < a+c && c < a+b) {
        if (
            a*a == b*b + c*c ||
            b*b == a*a + c*c ||
            c*c == a*a + b*b
            ) {
                cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "UNDEFINED";
    }
    return 0;
}
