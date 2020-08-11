#include <iostream>
#include <string>
using namespace std;

string to_camel_case(string text) {
    int N = text.length();
    char let{'a'};
    for (int i{ 0 }; i < N; i++) {
        let = text.at(i);
        if ((let == '_' || let == '-') && (i != (N - 1) && i != 0)) {
            text[i + 1] = toupper(text[i + 1]);
            text.erase(i, 1);
            N = text.length();
        }
    }
        return text;
 
}
