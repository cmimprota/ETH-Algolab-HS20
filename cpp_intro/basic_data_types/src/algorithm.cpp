#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include <stdexcept>
#include <iomanip>

using namespace std;

void testcase() {
    int integer;
    long long large_integer;
    std::string this_string;
    double this_double;

    cin >> integer;
    cin >> large_integer;
    cin >> this_string;
    cin >> this_double;

    cout << integer << " ";
    cout << large_integer << " ";
    cout << this_string << " ";
    cout << std::fixed << std::setprecision(2) << this_double << endl;

}

int main() {
    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t; 
    for (int i = 0; i < t; ++i)
        testcase(); 
}
