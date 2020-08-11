#include <iostream>  
#include<sstream>  
#include<vector>
using namespace std;

string int_to_string(int n) {
    stringstream ss;
    ss << n;
    string s;
    ss >> s;
    return s;
}

int sum_digits(int n) {
    string s{ int_to_string(n) };
    size_t size{ s.size() };
    int sum {0};
    vector<int> digits;
    for (size_t i{ 0 }; i < size; i++) {
        digits.push_back((int)s[i] - 48);
    }
    for (size_t j{ 0 }; j < size; j++) {
        sum += digits[j];
    }
    return sum;
}


int digital_root(int n)
{
    int m{ sum_digits(n) };
    string m_str{ int_to_string(m) };
    while (m_str.size() != 1) {
        m = sum_digits(m);
        m_str = int_to_string(m);
    }
    return m;
}
