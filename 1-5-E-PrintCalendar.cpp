#include <iostream>

using namespace std;

int main() {
	int n, k, day;
	cin >> n >> k;
	
	for (int i=1; i<k+n; i++) {
		day = i - n + 1;
		if (i < n) cout << "  ";
		else if (day < 10) cout << " " << day;
		else cout << day;
		if (i % 7 != 0) cout << " ";
		else cout << endl;
	}
		
    return 0;
}
