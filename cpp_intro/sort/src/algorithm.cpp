#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include <stdexcept>
#include <iomanip>

using namespace std;

void testcase() {
    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int c; cin >> c;
        v.push_back(c);
    }

    int x; cin >> x;

    if(x == 0){
        // Sort in non-decreasing order
        sort(v.begin(), v.end());
    } else {
        // Sort in non-decreasing order
        sort(v.begin(), v.end(), greater<int>());
    }

    for(int e : v)
        cout << e << " ";
    cout << endl;


    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    int t; std::cin >> t; 
    for (int i = 0; i < t; ++i)
        testcase(); 
}
