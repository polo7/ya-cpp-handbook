#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double result = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        result += pow(-1.0, i+1) / i;
    }
    cout << result;
    return 0;
}
