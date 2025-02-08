// 1. Number of valid parenthesis expressions with N pairs of "(" and ")"
#include <bits/stdc++.h>
using namespace std;
long long catalan(int n) {
    long long res = 1;
    for (int i = 0; i < n; i++) {
        res = res * (2 * (i + 1)) / (i + 2);
    }
    return res;
}
void generateParentheses(int open, int close, string current, vector<string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    if (open > 0) {
        generateParentheses(open - 1, close, current + "(", result);
    }
    if (close > open) {
        generateParentheses(open, close - 1, current + ")", result);
    }
}
long long validParentheses(int n) {
    return catalan(n);
}
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    cout << "1. Valid Parentheses Expressions: " << validParentheses(n) << endl;
    
    vector<string> result;
    generateParentheses(n, n, "", result);
    
    for (const string& s : result) {
        cout << s << endl;
    }
    
    re