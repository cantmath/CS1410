#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class Color {
private:
    double r, g, b; // RGB components

//    
public:
    Color():r(0.0), g(0.0), b(0.0){}
    Color(double r, double g, double b) : r(r), g(g), b(b){}

string toRGB() const {
    stringstream sout;
    sout << "RGB(" << static_cast<int>(r * 255) << ", "
         << static_cast<int>(g * 255) << ", "
         << static_cast<int>(b * 255) << ")";
    return sout.str(); 
}

string toHEX() const{
    stringstream sout;
    sout << "#" << setfill('0') << hex
         << setw(2) << static_cast<int>(r * 255) 
         << setw(2) << static_cast<int>(g * 255) 
         << setw(2) << static_cast<int>(b * 255);

    return sout.str(); // #01ac03
}

    friend ostream& operator<<(ostream& out, const Color& c) {
        out << "Color(R:" << c.r << ", G:" << c.g << ", B:" << c.b << ")";
        return out;
    }
    friend istream& operator>>(istream& in,  Color& c) {
        in >> c.r >> c.g >> c.b;
        return in;
    }

    double operator[](int index) const {
        switch(index) {
            case 0: return r;
            case 1: return g;
            case 2: return b;
            default: return -1.0; // invalid index
        }
    }
    double& operator[](int index) {
        switch(index) {
            case 0: return r;
            case 1: return g;
            case 2: return b;
            default: throw -1.0; // invalid index
        }
    }

    bool operator==(const  Color& c) const {
        return (r == c.r) && (g == c.g) && (b == c.b);
    } 

};
//
int main() {
    Color c;
    Color c1(1.0, 0.25, 0.5); 

    cout << c << endl; // <<(cout, c)
    cout << c1 << endl;

    cout << c.toRGB() << c.toHEX() << endl;       // RGB(0, 0, 0) #000000
    cout << c1.toRGB() << " " << c1.toHEX() << endl; // RGB(255, 64, 128) #ff4080  

    Color c2;
    cout << "Enter a color (three values between 0 and 1): ";
    cin >> c2;

    cout << "\nc1 red:" << c1[0] << endl; //read only
    cout << "\nc1 green:" << c1[1] << endl;
    cout << "\nc2 blue:" << c2[2] << endl;

    c2[1] = 0.6; // write

    if (c1 == c2) { // ==(c1, c2) becomes c1.==(c2)
        cout << "\nc1 and c2 are same" << endl;
    } else {
        cout << "\nc1 and c2 are NOT same" << endl;
    }
    return 0;
}