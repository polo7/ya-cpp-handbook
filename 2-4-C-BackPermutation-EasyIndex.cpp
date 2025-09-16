#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int p[n+1], inv_p[n+1];
    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
    }
    for (int i = 1; i <= n; ++i) {
        inv_p[p[i]] = i;
    }
    for (int i = 1; i <= n; ++i) {
        cout << inv_p[i] << " ";
    }
    return 0;
}
