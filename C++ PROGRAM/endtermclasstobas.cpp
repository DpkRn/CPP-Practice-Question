#include <iostream>
using namespace std;

class A {
    private:
        int x;
    public:
        A() {
            x = 0;
        }
        A(int a) {
            x = a;
        }
        // Conversion function
        operator int() {
            return x;
        }
};

int main() {
    A a(10);
    int b = a; // Implicit conversion
    cout << "Value of b: " << b << endl;
    return 0;
}
