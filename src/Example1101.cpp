#include <iostream>
#include <fstream>
#include <random>

using namespace std;

int main() {
    const int N = 200;
    const int minValue = 1;
    const int maxValue = 10;
    const double mean = 5.5;
    const double sd = 2.0;

    default_random_engine en;
    normal_distribution<double> dist(mean, sd);
    ofstream out("example1101.txt");
//
    for (int i = 0; i < N; ++i) {
        int x = round(dist(en));
        x = max(minValue, min(maxValue, x));
        out << x << " ";
    }

    out.close();

    cout << "Generated" << N << "Numbers in data.txt\n"; 
    return 0;
}