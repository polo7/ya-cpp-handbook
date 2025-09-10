#include <iostream>
#include <string>
#include <vector>

bool contains_char(std::vector<char> v, char c) {
    for (size_t i = 0; i < v.size(); ++i) {
        if (v[i] == c) {
            return true;
        }
    }
    return false;
}

int main() {
    std::string s;
    std::cin >> s;
    int len = s.size();
    if (len == 1) {
        std::cout << s << '0' << '0' << '0';
        return 0;
    }

    std::vector<char> s_code;
    std::vector<char> to_skip = {'a', 'e', 'h', 'i', 'o', 'u', 'w', 'y'};
    std::vector<char> digit_one = {'b', 'f', 'p', 'v'};
    std::vector<char> digit_two = {'c', 'g', 'j', 'k', 'q', 's', 'x', 'z'};
    std::vector<char> digit_three = {'d', 't'};
    std::vector<char> digit_four = {'l'};
    std::vector<char> digit_five = {'m', 'n'};
    std::vector<char> digit_six = {'r'};

    s_code.push_back(s[0]);
    char last_digit = '0';
    for (int i = 1; i < len; ++i) {
        char c = s[i];
        if (!contains_char(to_skip, c)) {
            char curr_digit = '0';
            if (contains_char(digit_one, c)) {
                curr_digit = '1';
            } else if (contains_char(digit_two, c)) {
                curr_digit = '2';
            } else if (contains_char(digit_three, c)) {
                curr_digit = '3';
            } else if (contains_char(digit_four, c)) {
                curr_digit = '4';
            } else if (contains_char(digit_five, c)) {
                curr_digit = '5';
            } else if (contains_char(digit_six, c)) {
                curr_digit = '6';
            }
            if (curr_digit != '0' && curr_digit != last_digit) {
                last_digit = curr_digit;
                s_code.push_back(curr_digit);
            }
        }
    }
    if (s_code.size() != 4) {
        s_code.resize(4, '0');
    }
    std::string result(s_code.begin(), s_code.end());
    std::cout << result;
    return 0;
}
