//
// Created by Odilbek Marimov on 9/24/24.
//
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin >> n;
    bool isPrime = true;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "Is a prime";
    } else {
        cout << "Is not a prime";
    }

    return 0;
}

