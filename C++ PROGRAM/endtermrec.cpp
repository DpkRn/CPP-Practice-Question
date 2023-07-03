#include <iostream>
using namespace std;

template <typename T>
T factorial(T n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int num;
    cout  << "Enter a positive integer: ";
    cin >>num;
    cout << "The factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

