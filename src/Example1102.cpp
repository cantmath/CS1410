#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>


using namespace std;

int main() {
    ifstream in("example1101.txt");
    vector<int> data;
    int x;
    while (in >> x) {
        data.push_back(x);
    }
    in.close();

//

    int minValue = *min_element(data.begin(), data.end());
    int maxValue = *max_element(data.begin(), data.end());
    double sum = 0.0;
    for (int x : data) {

        sum += x;
    }
    double mean = sum / data.size();

    double var = 0.0;
    for (int x : data) {
        var += (x - mean) * (x - mean);
    }

//
    var = var/data.size();
    double sd = sqrt(var);

    //histogram
    vector<int> freq(11, 0);
    for (int x : data) {
        if (x >= 1 && x <= 10) {
            freq[x]++;
        }
    }

    cout << "\nhistogram (1 to 10):\n";
    for (int i = 1; i <= 10; ++i) {
        cout << setw(2) << i << ": ";
        int barLength = freq[i] / 2; 

        for (int j = 0; j < barLength; ++j) {
            cout << "*";
        }
        cout << " (" << freq[i] << ")\n";
    }

    //summary

    cout << fixed << setprecision(2);
    cout << "\nSummary:\n";
    cout << "Count: " << data.size() << endl;
    cout << "Min: " << minValue << endl;
    cout << "Max: " << maxValue << endl;
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << sd << endl;


    return 0;
}