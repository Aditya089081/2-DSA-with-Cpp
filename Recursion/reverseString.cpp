#include <bits/stdc++.h>
using namespace std;

string reverseString(string s, int start, int end) {
    if (start >= end) {
        return s;
    }
    swap(s[start], s[end]);
    return reverseString(s, start + 1, end - 1);
}

int main() {
    string s = "Aditya";
    string s2 = reverseString(s, 0, s.size() - 1);
    cout<<s2;
}
