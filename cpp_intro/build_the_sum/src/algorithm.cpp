#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include <stdexcept>

using namespace std;

void testcase() {
    int n; cin >> n; // number of integers to sum up
    int c, sum;
    sum = 0;
    for(int i = 0; i < n; i++){
        cin >> c;
        sum += c;
    }
    cout << sum << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t; 
    for (int i = 0; i < t; ++i)
        testcase(); 
}
