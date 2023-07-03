#include <iostream>
using namespace std;

class IntObject {
    private:
        int value;
    public:
        IntObject(int v) {
            value = v;
        }
        int getValue() {
            return value;
        }
};

int main() {
    int num = 5;
    IntObject intObject(num);
    cout << "The value of the int object is: " << intObject.getValue() << endl;
    return 0;
}
