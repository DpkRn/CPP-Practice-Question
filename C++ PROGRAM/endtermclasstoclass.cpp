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
        int getX() {
            return x;
        }
};

class B {
    private:
        int y;
    public:
        B() {
            y = 0;
        }
        B(int b) {
            y = b;
        }
        int getY() {
            return y;
        }
        // Conversion function
        operator A() {
            return A(y);
        }
};

int main() {
    B b(10);
    A a = b; // Implicit conversion
    cout << "Value of x in class A: " << a.getX() << endl;
    return 0;
}
