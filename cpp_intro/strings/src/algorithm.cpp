#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include <stdexcept>
#include <iomanip>

using namespace std;

void testcase() {
    
    string a; cin >> a;
    string b; cin >> b;

    int length_a = a.length();
    int length_b = b.length();
    cout << length_a << " " << length_b << endl;

    string concat = a + b;
    cout << concat << endl;

    string c = a;
    reverse(c.begin(), c.end());
    string d = b;
    reverse(d.begin(), d.end());
    char temp = c[0];
    c[0] = d[0];
    d[0] = temp;
    cout << c << " " << d << endl;

    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t; 
    for (int i = 0; i < t; ++i)
        testcase(); 
}
