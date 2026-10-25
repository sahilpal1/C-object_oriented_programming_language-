#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int lowerLimit, upperLimit;

    cout << "Enter lower limit: ";
    cin >> lowerLimit;

    cout << "Enter upper limit: ";
    cin >> upperLimit;

    cout << "Prime numbers between " << lowerLimit << " and " << upperLimit << " are:" << endl;
    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (isPrime(i))
            cout << i << " ";
    }

    return 0;
}
