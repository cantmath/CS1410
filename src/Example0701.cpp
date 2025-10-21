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

string toRGB(){
    stringstream sout;
    sout << "RGB(" << static_cast<int>(r * 255) << ", "
         << static_cast<int>(g * 255) << ", "
         << static_cast<int>(b * 255) << ")";
    return sout.str(); 
}

string toHEX(){
    stringstream sout;
    sout << "#" << setfill('0') << hex
         << setw(2) << static_cast<int>(r * 255) 
         << setw(2) << static_cast<int>(g * 255) 
         << setw(2) << static_cast<int>(b * 255);

    return sout.str(); // #01ac03
}

};
//
int main() {
    Color c;
    Color c1(1.0, 0.25, 0.5); 

    cout << c.toRGB() << c.toHEX() << endl;       // RGB(0, 0, 0) #000000
    cout << c1.toRGB() << " " << c1.toHEX() << endl; // RGB(255, 64, 128) #ff4080  

    return 0;
}
