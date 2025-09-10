#include <iostream>
#include <string>
#include <cctype>

int main() {
    bool has_upper_case = false, has_lower_case = false, has_digits = false, has_spec_symbols = false;
    int result = 0;
    std::string s;

    std::cin >> s;

    if (s.size() < 8 || s.size() > 14) {
        std::cout << "NO";
        return 0;
    }

    for (const char c : s) {
        // if (!isprint(c) || isspace(c)) {
        if (c < 33 || c > 126) {
            std::cout << "NO";
            return 0;
        }
        has_upper_case = isupper(c) || has_upper_case;
        has_lower_case = islower(c) || has_lower_case;
        has_digits = isdigit(c) || has_digits;
        has_spec_symbols = ispunct(c) || has_spec_symbols;
    }
    result = has_upper_case + has_lower_case + has_digits + has_spec_symbols;
    if (result < 3) {
        std::cout << "NO";
    } else {
        std::cout << "YES";
    }
    return 0;
}
