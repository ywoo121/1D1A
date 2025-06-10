#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    
    for (int i = 0; i < t; i++) {
        double value;
        string unit;
        cin >> value >> unit;
        
        if (unit == "kg") {
            double result = value * 2.2046;
            cout << fixed << setprecision(4) << result << " lb" << endl;
        } else if (unit == "lb") {
            double result = value * 0.4536;
            cout << fixed << setprecision(4) << result << " kg" << endl;
        } else if (unit == "l") {
            double result = value * 0.2642;
            cout << fixed << setprecision(4) << result << " g" << endl;
        } else if (unit == "g") {
            double result = value * 3.7854;
            cout << fixed << setprecision(4) << result << " l" << endl;
        }
    }
}
