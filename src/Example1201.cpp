#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
class Calculator {
    private:
    T a;
    T b;

    public:
    Calculator(T a, T b) : a(a), b(b) {}

    T add() {
        return a + b;
    }
    T subtract() {
        return a - b;
    }
    T multiply() {
        return a * b;
    }           
    double divide() {
        if (b == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main() {
    try {
        Calculator<double> c(10.0, 2.0);
        cout << c.add() << endl;    
        cout << c.subtract() << endl;
        cout << c.multiply() << endl;
        cout << c.divide() << endl;

        Calculator<int> c1(4, 0);
        cout << c1.add() << endl;    
        cout << c1.subtract() << endl;
        cout << c1.multiply() << endl;
        cout << c1.divide() << endl;



    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}