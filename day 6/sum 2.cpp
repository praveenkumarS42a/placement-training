// 2. Number of different ways N+1 factors can be completely parenthesized
#include <bits/stdc++.h>
using namespace std;
long long catalan(int n) {
    long long res = 1;
    for (int i = 0; i < n; i++) {
        res = res * (2 * (i + 1)) / (i + 2);
    }
    return res;
}
void generateParenthesizations(int n, vector<string>& result, string current, int open, int close) {
    if (open == n && close == n) {
        result.push_back(current);
        return;
    }
    if (open < n) {
        generateParenthesizations(n, result, current + "(", open + 1, close);
    }
    if (close < open) {
        generateParenthesizations(n, result, current + ")", open, close + 1);
    }
}
long long waysToParenthesize(int n) {
    return catalan(n);
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    cout << "2. Ways to Parenthesize (N+1 factors): " << waysToParenthesize(n) << endl;
    
    vector<string> result;
    generateParenthesizations(n, result, "", 0, 0);
    
    cout << "Valid Parenthesizations: " << endl;
    for (const string& s : result) {
        cout << s << endl;
    }
    
    return 0;
}
