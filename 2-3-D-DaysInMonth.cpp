#include <iostream>

using namespace std;

bool IsLeapYear(int year) {
    bool isLeap;

    if (year % 4 != 0) {
        isLeap = false;
    } else {
        if (year % 100 == 0 && year % 400 != 0) {
            isLeap = false;
        } else {
            isLeap = true;
        }
    }
    return isLeap;
}

int main() {
    int month, year;
    cin >> month >> year;

    if ((month <= 7 && month % 2 != 0) || (month > 7 && month % 2 == 0)) {
        cout << 31;
    } else if (month != 2) {
        cout << 30;
    } else {
        if (IsLeapYear(year)) {
            cout << 29;
        } else {
            cout << 28;
        }
    }
    return 0;
}
