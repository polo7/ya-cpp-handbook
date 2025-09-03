#include <iostream>

using namespace std;

int main() {
	int num, divider = 10, sum = 0;
	cin >> num;
	sum += num % divider;
	while (int d = num / divider) {
		sum += d % 10;
		divider *= 10;
	}
	cout << sum;
	return 0;
}
