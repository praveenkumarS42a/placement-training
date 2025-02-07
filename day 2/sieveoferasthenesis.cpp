#include <iostream>
#include <vector>

using namespace std;

void sieve(int r) {
    vector<bool> isPrime(r + 1, true); 
    isPrime[0] = isPrime[1] = false;  
    for (int i = 2; i * i <= r; i++) {
        if (isPrime[i]) { 
            for (int j = i * i; j <= r; j += i) {
                isPrime[j] = false; 
            }
        }
    }

    cout << "Prime numbers from 1 to " << r << ": ";
    for (int i = 1; i <= r; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int r;
    cout << "Enter the value of r: ";
    cin >> r;
    sieve(r);
    return 0;
}