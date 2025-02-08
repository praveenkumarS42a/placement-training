// 5. Count of number of ways to divide a circle using N non-intersecting chords
#include <bits/stdc++.h>
using namespace std;
long long catalan(int n) {
    long long res = 1;
    for (int i = 0; i < n; i++) {
        res = res * (2 * (i + 1)) / (i + 2);
    }
    return res;
}
long long nonIntersectingChords(int n) {
    return catalan(n);
}
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    cout << "5. Number of Ways to Divide a Circle Using " << n << " Non-Intersecting Chords: " << nonIntersectingChords(n) << endl;
    cout << "\nExample:\n";
    for (int i = 0; i <= 5; i++) {
        cout << "N = " << i << " -> " << nonIntersectingChords(i) << " ways" << endl;
    }
    
    return 0;
}
