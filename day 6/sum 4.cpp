// 4. Count of structurally unique BST with N keys
#include <bits/stdc++.h>
using namespace std;
long long catalan(int n) {
    long long res = 1;
    for (int i = 0; i < n; i++) {
        res = res * (2 * (i + 1)) / (i + 2);
    }
    return res;
}
long long uniqueBST(int n) {
    return catalan(n);
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    cout << "4. Count of Structurally Unique BST with " << n << " Keys: " << uniqueBST(n) << endl;
    cout << "\nExample:\n";
    for (int i = 0; i <= 5; i++) {
        cout << "N = " << i << " -> " << uniqueBST(i) << " BSTs" << endl;
    }
    
    return 0;
}