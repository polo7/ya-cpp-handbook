#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int p[n], inv_p[n];
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for (int i = 0; i < n; ++i) {
        inv_p[p[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; ++i) {
        cout << inv_p[i] << " ";
    }
    return 0;
}
