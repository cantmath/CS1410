#include <iostream>
#include <stdexcept>

using namespace std;
template <typename E>
class Array{
    public:
    Array(int size): sz(size){
        data = new E[size];
    }

    ~Array(){
        delete[] data;
    }

    int size() const{
        return sz;
    }

    const E& operator[](int index) const{
        if(index < 0 || index >= sz){
            throw runtime_error("Index out of bounds.");
        }
        return data[index];
    }

    E& operator[](int index){
        if(index < 0 || index >= sz){
            throw runtime_error("Index out of bounds.");
        }
        return data[index];
    }

    private:
    E* data;
    int sz; 
};

int main() {
    try {
    Array<int> numbers(10);
    for(int i = 0; i < numbers.size(); ++i){
        numbers[i] = i * 5 + 17;
    }

    cout << "@ 2: " << numbers[2] << endl;
    cout << "@ -1: " << numbers[-1] << endl; //undefined
    cout << "@ 100: " << numbers[100] << endl; //undefined
} catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    
    return 0;
}