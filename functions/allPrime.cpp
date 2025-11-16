#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;  // 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {     // if divisible, not prime
            return false;
        }
    }
    return true;  // prime
}

// printing all prime numbers
void allPrime(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    allPrime(13);
    return 0;
}
