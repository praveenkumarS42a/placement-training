// 3. Number of rooted binary trees with N internal nodes
#include <bits/stdc++.h>
using namespace std;
long long catalan(int n) {
    long long res = 1;
    for (int i = 0; i < n; i++) {
        res = res * (2 * (i + 1)) / (i + 2);
    }
    return res;
}

long long rootedBinaryTrees(int n) {
    return catalan(n);
}
int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    cout << "3. Number of Rooted Binary Trees with " << n << " Internal Nodes: " << rootedBinaryTrees(n) << endl;
    cout << "\nExample:\n";
    for (int i = 0; i <= 5; i++) {
        cout << "N = " << i << " -> " << rootedBinaryTrees(i) << " trees" << endl;
    }
    
    return 0;
}
